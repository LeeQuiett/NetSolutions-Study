### 사용자가 입력한 숫자만큼 ‘*’ 출력하기

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	int i = 0;
	printf("입력한 숫자만큼 '*'을 출력합니다: ");

	scanf("%d", &input);
	while (i < input) {
		printf("*");
		i++;
	} printf("\n");

	return 0;
}
```

---

### 구구단

- 답안

```c
#include <stdio.h>

int main(void) {
	int i = 1, j = 0;

	while (i <= 9) {
		j = 2;
		while (j <= 9) {
			printf(" %d X %d = %d ", i, j, i * j);
			j++;
		} 
		printf("\n");
		i++;
	}

	return 0;
}
```

---

### 5행 5열의 사각형 출력하기

- 답안

```c
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	while (i < 5) {
		while (j < 5) {
			printf("* ");
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	
	return 0;
}
```

---

### 총합 구하기

- 답안

```c
#include <stdio.h>

int main(void) {
	int sum = 0;
	int i = 1;

	while (i <= 10) {
		sum += i;
		i++;
	}
	printf("SUM: %d", sum);

	return 0;
}
```

---

### 구구단에서 한 단만 출력하기

반드시 while문을 이용하며 입력값이 2보다 작거나 9보다 크면 “ERROR”라고 출력합니다.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	int i = 1;

	scanf("%d", &input);
	if (input < 2 || input >9) {
		puts("ERROR");
		return 1;
	}
	while (i < 10) {
		printf("%d X %d = %d \n", input, i, input * i);
		i++;
	}

	return 0;
}
```

---

### 직각 삼각형 출력하기

- 답안

```c
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i + 1; j++) {
			printf("* ");
		} printf("\n");
	}
}
```

```c
*
* *
* * *
* * * *
* * * * *
```

---

### 반대로 직각 삼각형 출력하기

- 답안

```c
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	for (i = 0; i < 5; i++) {
		for (j = i; j < 4; j++) {
			printf("  ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf(" *");
		}	printf("\n");
	}
}
```

```c
         *
       * *
     * * *
   * * * *
 * * * * *
```

### 교재의 답안

```c
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i + j >= 4) printf("*\t");
			else printf("\t");
		} putchar('\n');
	}
	return 0;
}
```

---

### 피라미드 출력하기

```c
#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	for (i = 0; i < 5; i++) {
		for (j = i; j < 4; j++) {
			printf("  ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf(" *");
		}	printf("\n");
	}
}
```

```c
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
```

### 교재의 답안

```c
#include <stdio.h>

int main(void) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++) {
			if (i + j >= 4) printf("*\t");
			else printf("\t");
		} putchar('\n');
	}
	return 0;
}
```

---

### 1~100까지의 숫자 중에서 4의 배수가 몇 개이며, 이들의 총합이 얼마인지 계산해 출력하는 프로그램을 작성하세요.

- 답안

```c
#include <stdio.h>

int main(void) {
	int sum = 0, count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 4) == 0) {
			sum += i;
			count++;
		}
	}
	printf("4의 배수의 개수 %d, 총합 %d", count, sum);
}
```

---

### 다음과 같이 ‘*’을 출력하는 프로그램을 작성하세요.

```c
     *
    * *
   * * *
  * * * *
 * * * * *
```

- 답안

```c
 #include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("* ");
        }
        putchar('\n');
    }
    return 0;
}
```
