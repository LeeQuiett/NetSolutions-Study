### 합격자와 불합격자를 분류하는 방법

키가 150cm 이상이면 ‘합격’ 그렇지 않으면 ‘불합격’이라고 출력하는 프로그램을 삼항 연산자를 사용하여 작성하세요.

- 답안

```c
#include <stdio.h>

int main(void) {
	int height = 0;
	printf("키를 입력하세요: ");
	scanf_s("%d%*c", &height);
	height >= 150 ? "합격" : "불합격";
	printf("\n결과 %s\n", (height >= 150 ? "합격" : "불합격"));

	return 0;
}
```

---

### 세 정수 중에서 가장 큰 수 구하기(토너먼트 방식)

- 답안(교재 흐름상 아직 조건문이 나오지 않았기 때문에 사용하지 않음)

```c
#include <stdio.h>

int main(void) {
	int max = 0;
	int a, b, c;

	//토너먼트 방식
	scanf_s("%d%d%d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	printf("MAX : %d\n", max);
	return 0;
}
```

---

### 세 정수 중에서 가장 큰 수 구하기(서바이벌 방식)

- 답안

```c
#include <stdio.h>

int main(void) {
	//서바이벌 방식
	int max = 0, input = 0;

	scanf_s("%d", &input);
	max = input;

	scanf_s("%d", &input);
	max = max > input ? max : input;

	scanf_s("%d", &input);
	max = max > input ? max : input;

	printf("MAX: %d", max);

	return 0;
}
```

---

### 세 정수 중에서 가장 큰 수 구하기(논리적 결함을 찾아 수정, 함수 논리구조 변경X, 5번행 수정하여 문제 해결, 사용자 입력은 -100~+100 사이 정수 가정)

```c
#include <stdio.h>

int main(void) 
{
	int max, input = 0;

	scanf("%d", &input);
	max = input > max ? input : max;

	scanf("%d", &input);
	max = input > max ? input : max;

	scanf("%d", &input);
	max = input > max ? input : max;

	printf("MAX: %d\n", max);

	return 0;
}
```

- 답안
    - 변수 max가 초기화되어있지 않아서 문제가 발생한 것.
    - 0으로 초기화하면 문제에서 지정한 최솟값 -100 입력시 문제 발생
    - 지정된 최솟값 -100 보다 작은 수로 초기화하여 해결

```c
#include <stdio.h>

int main(void) 
{
	int max = -101, input = 0;

	scanf_s("%d", &input);
	max = input > max ? input : max;

	scanf_s("%d", &input);
	max = input > max ? input : max;

	scanf_s("%d", &input);
	max = input > max ? input : max;

	printf("MAX: %d\n", max);

	return 0;
}
```
