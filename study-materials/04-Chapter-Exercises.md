### 초를 ‘시:분:초’로 변환하는 프로그램

```c
입력 예:
4000
출력 예:
4000초는 01시간 06분 40초 입니다.
```

- 답안

```c
#include <stdio.h>

int main(void) {
	int second = 0;
	int h = 0, m = 0, s = 0;

	printf("정수로 초를 입력받아 '시:분:초' 형식으로 출력하겠습니다. : ");
	scanf_s("%d", &second);

	h = second / 3600;
	m = (second-3600) / 60;
	s = second % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", second, h, m, s);

	return 0;
}
```

### 세 정수의 누적 및 출력

```c
#include <stdio.h>

int main(void) {
	int nInput, nTotal;

	//여기에 들어갈 코드를 작성하세요.

	printf("Total: %d\n," nTotal);
	return 0;
}
```

```c
입력 예:
1
2
3

출력 예:
Total: 6
```

- 답안

```c
#include <stdio.h>

int main(void) {
	int nInput = 0, nTotal = 0;

	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d", &nInput);
	nTotal += nInput;
	scanf_s("%d%*c", &nInput);
	nTotal += nInput;

	printf("Total: %d", nTotal);
	return 0;
}
```
