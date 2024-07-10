### 요소의 값을 교환하는 방식으로 배열에서 최솟값 구하기

최솟값이 저장되는 변수는 별도로 선언하지 않고 배열의 0번 요소에 저장합니다. 그러나 값을 대입하는 것이 아니라 교환합니다. 단순 대입으로 인해 요소 중 일부 값이 유실되는 일이 없어야 합니다.

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int i = 0, temp = 0;

	for (i = 1; i < 5; i++)
	{
		if (list[0] > list[i]) {
			temp = list[0];
			list[0] = list[i];
			list[i] = temp;
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", list[i]);
	}
}
```

---

### 2차원 배열의 행과 열의 총합 계산하기

열의 길이가4, 행의 길이가 3인 int 형 배열의 행, 열의 총합을 계산하는 프로그램을 작성합니다.

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i!=2 && j == 3) {
				list[i][j] = (list[i][j - 1] + list[i][j - 2] + list[i][j - 3]);
			}
			if (i == 2) {
				list[i][j] = (list[i - 1][j] + list[i - 2][j]);
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
	return 0;
}
```

- 출력

```c
10 20 30 60
40 50 60 150
50 70 90 210
```

---

### 요소의 자료형이 int형이고 길이가 5인 배열을 선언한 후, 사용자가 입력한 다섯 개의 정수로 초기화합니다. 그리고 그 중에서 가장 큰 수와 가장 작은 수를 출력하는 프로그램을 작성합니다.

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5] = { 0 };
	int max = 0, min = 9999;
	
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &list[i]);
		if (max < list[i]) {
			max = list[i];
		}
		if (min > list[i]) {
			min = list[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\nMAX: %d, MIN: %d", max, min);
	return 0;
}
```

---

### 사용자로부터 문자열을 입력받은 후 문자열의 길이를 출력하는 프로그램을 작성합니다. 글자 사이의 공백이나 탭 같은 화이트 스페이스는 없는 것으로 한다.

- 답안

```c
#include <stdio.h>

int main(void) {
	char buffer[32] = { 0 };
	int i = 0;
	gets(buffer);

	while (buffer[i] != '\0' && buffer[i] != '\n') {
		i++;
	}

	printf("문자의 개수는 %d자 입니다.", i);

	return 0;
}
```
