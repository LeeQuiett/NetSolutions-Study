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

###
