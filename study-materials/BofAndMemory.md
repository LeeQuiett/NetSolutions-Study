# 디버깅 시 힙 영역의 버퍼 오버플로우 발생할 때 메모리에서는?

```c
#include <stdio.h>#include <stdlib.h>int main(void) {
	int* pList = NULL;

	pList = (int*)malloc(sizeof(int) * 3);

	pList[0] = 1;
	pList[1] = 2;
	pList[2] = 3;
	pList[3] = 4;

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", pList[i]);
	}

	return 0;
}
```

위 코드를 보면 int 3개를(12바이트) 할당 받아 놓고 그 뒤의 메모리 번지에 쓰기 연산을 수행했는데 빌드타임에 컴파일러는 에러나 오류를 내지 않는다.

언제 에러가 날까?

![image.png](https://github.com/LeeQuiett/NetSolutions-Study/blob/main/study-materials/images/%EB%B2%84%ED%8D%BC%20%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C%EC%9A%B0%EC%99%80%20%EB%A9%94%EB%AA%A8%EB%A6%AC/image.png)

메인 함수가 다 종료되고 나서야 힙 메모리를 썼는데 corruption이 났다고 에러를 낸다.

위 코드를 11행까지 연산한 시점에서 보면

![image.png](https://github.com/LeeQuiett/NetSolutions-Study/blob/main/study-materials/images/%EB%B2%84%ED%8D%BC%20%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C%EC%9A%B0%EC%99%80%20%EB%A9%94%EB%AA%A8%EB%A6%AC/image%201.png)

![image.png](https://github.com/LeeQuiett/NetSolutions-Study/blob/main/study-materials/images/%EB%B2%84%ED%8D%BC%20%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C%EC%9A%B0%EC%99%80%20%EB%A9%94%EB%AA%A8%EB%A6%AC/image%202.png)

위 창을 보면 주소

```
0x0000019C1A2BD870
```

는 pList포인터가 가리키는 곳이고 11행까지 연산하여 int형 자료 1, 2, 3이 잘 들어가 있는 모습을 볼 수 있다.

```
0x0000019C1A2BD87C
```

번지를 보게 되면 fd fd fd fd가 저장되어 있는데 이를 카나리스(Canaries) 또는 카나리(canary)라고 하고 여기선 할당 받은 메모리와 그렇지 않은 메모리 사이에 위치해 있다.

![image.png](https://github.com/LeeQuiett/NetSolutions-Study/blob/main/study-materials/images/%EB%B2%84%ED%8D%BC%20%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C%EC%9A%B0%EC%99%80%20%EB%A9%94%EB%AA%A8%EB%A6%AC/image%202.png)

> 자세한건 위키백과 참조
> 
> 
> [https://ko.wikipedia.org/wiki/%EB%B2%84%ED%8D%BC_%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C_%EB%B3%B4%ED%98%B8](https://ko.wikipedia.org/wiki/%EB%B2%84%ED%8D%BC_%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C_%EB%B3%B4%ED%98%B8)
> 

이제 12행의 할당된 메모리를 벗어난 쓰기 연산을 수행하게 되면

![image.png](https://github.com/LeeQuiett/NetSolutions-Study/blob/main/study-materials/images/%EB%B2%84%ED%8D%BC%20%EC%98%A4%EB%B2%84%ED%94%8C%EB%A1%9C%EC%9A%B0%EC%99%80%20%EB%A9%94%EB%AA%A8%EB%A6%AC/image%204.png)

이렇게 카나리가 덮어 씌워진 걸 볼 수 있다.

그럼 저기다 대고 카나리를 쓰기하면?

```c
#include <stdio.h>#include <stdlib.h>int main(void) {
	int* pList = NULL;

	pList = (int*)malloc(sizeof(int) * 3);

	pList[0] = 1;
	pList[1] = 2;
	pList[2] = 3;
	pList[3] = 0xfdfdfdfd; // <- 카나리비트 자리에 카나리를 쓰기연산 한다.

	for (int i = 0; i < 4; i++)
	{
		printf("%d ", pList[i]);
	}

	free(pList);

	return 0;
}
```

에러 없이 프로그램이 정상 종료된다.

---

> 참고문헌
> 
> - 최호성. 독하게 시작하는 C 프로그래밍. 인프런 (https://inf.run/iXxzY)
