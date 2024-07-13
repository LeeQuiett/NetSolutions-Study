### 선택정렬로 알려진 버블정렬 구현

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, temp = 0;
	
	for (i; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (list[i] > list[j]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", list[i]);
	}
	putchar('\n');
	return 0;
}

```

---

### 버블정렬 구현

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	int k = 0;
	while (k < 5) {
		printf("%d ", list[k]);
		k++;
	}

	return 0;
}
```

---

### 선택정렬 구현

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int minIndex = 0, temp = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (list[minIndex] > list[j]) {
				minIndex = j;
			}
 		}
		if (list[i] > list[minIndex]) {
			temp = list[i];
			list[i] = list[minIndex];
			list[minIndex] = temp;
		}
	}
	int k = 0;
	while (k < 5) {
		printf("%d ", list[k]);
		k++;
	}
}
```

---

### 배열과 교차의 구현

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/ea8dd16e-ce24-4633-b1ef-2f39a7414cd8/623da668-8f7b-4c29-9b73-bcc1fddf0bb8/Untitled.png)

- 답안-1
    - 열의 인덱스를 증가시키거나 감소시켜서 채우는 방식

```c
#include <stdio.h>

int main(void) {
	int multiArray[5][5] = { 0 };
	int index = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++)
			{
				multiArray[i][j] = index++;
			}
		}
		else {
			for (int k = 4; k >= 0; k--)
			{
				multiArray[i][k] = index++;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", multiArray[i][j]);
		} putchar('\n');
	}

	return 0;
}
```

- 답안-2
    - 배열을 순방향으로만 채우면서 0번 요소의 값을 직접 계산하는 방법

```c
#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int counter = 0, offset = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			counter = i * 5;
		}
		else {
			counter = (i + 1) * 5 + 1;
		}
		for (int j = 0; j < 5; j++)
		{
			counter += offset;
			list[i][j] = counter;
		}
		offset = -offset;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}

	return 0;
}
```

- 답안-3
    - 순방향으로 채우며 flag 사용하는 방법

```c
#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int counter = 1;
	int flag = 1;

	for (int i = 0; i < 5; i++)
	{
		if (flag) {
			for (int j = 0; j < 5; j++)
			{
				list[i][j] = counter++;
			} flag = 0;
		}
		else {
			for (int j = 0; j < 5; j++)
			{
				list[i][4 - j] = counter++;
			} flag = 1;
		}		
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
	return 0;
}
```

---

### 달팽이 배열 채우기

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/ea8dd16e-ce24-4633-b1ef-2f39a7414cd8/cdc0599c-5223-43b0-9d0a-589f5700b7b9/Untitled.png)

- 답안

```c
#include <stdio.h>	

int main(void) {
	int list[5][5] = { 0 };
	int x = -1, y = 0, counter = 0;
	int i = 0, j = 0, length = 9, direction = 1;

	for (length = 9; length > 0; length -= 2) {
		for (i = 0; i < length; i++) {
			if (i < (length / 2) + 1) x += direction;
			else y += direction;

			list[y][x] = ++counter;
		}
		direction = -direction;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
}
```

- 출력

```c
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
```

---

### 5행 5열의 배열에 다음과 같이 채우고 출력

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/ea8dd16e-ce24-4633-b1ef-2f39a7414cd8/4a340611-6ec3-4966-b643-f4556f38d2c9/Untitled.png)

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int i = 0, j = 0;
	int flag = 1;
	int counter = 1;

	for (i; i < 5; i++)
	{

		for (j; j < 5 && j >=0; j+=flag)
		{
			list[j][i] = counter++;
		}
		flag = -flag;
		//i += flag;
		j += flag;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
	return 0;
}#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int i = 0, j = 0;
	int flag = 1;
	int counter = 1;

	for (i; i < 5; i++)
	{

		for (j; j < 5 && j >=0; j+=flag)
		{
			list[j][i] = counter++;
		}
		flag = -flag;
		//i += flag;
		j += flag;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
	return 0;
}
```

---

### 반시계 방향의 달팽이 배열

- 답안

```c
#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	
	int x = 0, y = 5;
	int flag = -1;
	int length = 9;
	int counter = 1;

	for (length; length > 0; length -=2)
	{
		for (int i = 0; i < length; i++)
		{
			if (i < (length / 2) + 1) y += flag;
			else x += -flag;
			list[x][y] = counter++;
		} flag = -flag;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
}
```
