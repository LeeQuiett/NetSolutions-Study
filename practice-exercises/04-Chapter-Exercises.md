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

---

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

---

### 연산의 중첩에서 연산의 ‘임시결과’란 무엇을 의미하며, 임시결과의 가장 중요한 특징은 무엇인지 기술하세요.

- ‘임시결과’란 계산 중간 결과
- 최종 계산 후 사라짐

---

### char형 자료와 int형 자료 간에 + 연산을 수행하면 임시결과의 자료형은 무엇인지 답하세요.

- int형, 더 큰 자료형으로 형변환이 일어난다.

---

### 2번 문제와 같은 현상을 부르는 용어는 무엇이며, 이형자료 간의 연산에서 임시결과에 대한 자료형이 결정되는 근거는 무엇인지 기술하세요

- 형변환, 더 큰 자료형으로 자료형이 결정됨.

---

### 5 / 2 연산 결과의 자료형식과 값은 무엇입니까?

- int형, 2

---

### 사용자로부터 정수를 입력받아 5로 나눈 나머지를 출력하는 프로그램을 작성하세요.

```c
#include <stdio.h>

int main(void) {
	int input = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d%*c", &input);
	printf("5로 나눈 결과는: %d", input / 5);

	return 0;
}
```

---

### 대입 연산자의 왼쪽 피연산자가 될 수 있는 자격을 갖춘 대상을 부르는 용어는 무엇인지 답하세요

- L-Value
