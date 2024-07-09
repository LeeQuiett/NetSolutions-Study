### if문을 이용한 최댓값 구하기

- 답안

```c
#include <stdio.h>

int main(void) {

	int max = -9999, input = 0;
	scanf_s("%d%*c", &input);

	if (max > input) {
	}
	else {
		max = input;
	}

	scanf_s("%d%*c", &input);

	if (max > input) {
	}
	else {
		max = input;
	}

	scanf_s("%d%*c", &input);

	if (max > input) {
	}
	else {
		max = input;
	}

	printf("MAX: %d", max);
	
	return 0;
}
```

---

### 버스요금 계산 프로그램

버스의 기본요금을 1000원이라고 가정하고, 나이 20세 미만은 25% 할인, 나머지는 기본 요금으로 설정합니다. 계산 과정의 자료형에 주의합니다.

- 답안

```c
#include <stdio.h>

int main(void) {
	int defaultFare = 1000;
	int age = 0;

	scanf_s("%d", &age);

	if (age < 20) {
		printf("최종요금: %d", (defaultFare * 75) / 100); //부동소수점 오차 피해가기
	}
	else {
		printf("최종요금: %d", defaultFare);
	}

	return 0;
}
```

---

### 나이에 따른 분류 및 요금계산

버스의 기본요금을 1000원이라고 가정하고 다음과 같은 연령별 분류에 따라서 별도의 할인율을 적용하여 최종요금을 계산하는 프로그램을 작성합니다. if else 문을 2분할 방식으로 분류하여 구현합니다.

| 0~3세 | 영유아 | 할인율 100% |
| --- | --- | --- |
| 4~13세 | 어린이 | 할인율 50% |
| 14~19세 | 청소년 | 할인율 25% |
| 20세 이상 | 성인 | 할인율 0% |
- 답안

```c
#include <stdio.h>

int main(void) {
	int defaultFare = 1000;
	int age = 0;

	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);

	if (age >= 14) {
		if (age >= 20) {
			defaultFare = 1000;
		}
		else {
			defaultFare = ((defaultFare * 75) / 100);
		}
	}
	else {
		if (age >= 4) {
			defaultFare = ((defaultFare * 50) / 100);
		}
		else {
			defaultFare = 0;
		}
	}

	printf("최종요금: %d원", defaultFare);

	return 0;
}
```

---

### if문을 사용하여 사용자로부터 정수 다섯 개를 입력받아 그중 가장 큰 수를 출력하는 프로그램을 작성하세요.

 단, 사용자는 0~100 사이의 값만 입력하도록 강제합니다. 만일 범위를 벗어난 숫자를 입력할 경우 0 미만은 0으로 100초과는 100으로 조정합니다.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int inputArray[5] = { 0 };
	int max = 0;

	//교재 흐름상 반복문을 배우지 않았기 때문에 이렇게 작성함.
	printf("정수 5개를 입력하세요: ");
	
	scanf("%d", &inputArray[0]);
	if (inputArray[0] < 0) {
		inputArray[0] = 0;
	} else if(inputArray[0] > 100) {
			inputArray[0] = 100;
		}

	scanf("%d", &inputArray[1]);
	if (inputArray[1] < 0) {
		inputArray[1] = 0;
	}
	else if (inputArray[1] > 100) {
		inputArray[1] = 100;
	}

	scanf("%d", &inputArray[2]);
	if (inputArray[2] < 0) {
		inputArray[2] = 0;
	}
	else if (inputArray[2] > 100) {
		inputArray[2] = 100;
	}

	scanf("%d", &inputArray[3]);
	if (inputArray[3] < 0) {
		inputArray[3] = 0;
	}
	else if (inputArray[3] > 100) {
		inputArray[3] = 100;
	}

	scanf("%d", &inputArray[4]);
	if (inputArray[4] < 0) {
		inputArray[4] = 0;
	}
	else if (inputArray[4] > 100) {
		inputArray[4] = 100;
	}

	if (inputArray[0] < inputArray[1]) {
		max = inputArray[1];
	}
	else {
		max = inputArray[0];
	}

	if (max > inputArray[2]) {

	}
	else {
		max = inputArray[2];
	}

	if (max > inputArray[3]) {

	}
	else {
		max = inputArray[3];
	}

	if (max > inputArray[4]) {

	}
	else {
		max = inputArray[4];
	}

	printf("MAX: %d", max);

	return 0;
}
```
