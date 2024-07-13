### 사용자가 입력한 값에서 최댓값 구하기와 코드 분할

세 정수를 입력받아 최댓값을 찾아 출력하는 프로그램을 입력, 최댓값 계산, 출력 등 세 부분으로 구성하여 작성하라.

- 답안

```c
#include <stdio.h>

int setData() {
	int input = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d%*c", &input);

	return input;
}

int getMax(int inputA, int inputB, int inputC) {
	int max = inputA; 

	if (inputB > max) {
		max = inputB; 
	}
	if (inputC > max) {
		max = inputC; 
	}

	return max;
}

void printData(int a, int b, int c, int max) {
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", a, b, c, max);
}

int main(void) {
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	//입력
	for (i = 0; i < 3; ++i) {
		aList[i] = setData();
	}
	//최댓값 계산
	nMax = getMax(aList[0], aList[1], aList[2]);

	//출력
	printData(aList[0], aList[1], aList[2], nMax);
	return 0;
}
```

---

### 매개변수로 int형 자료 4개를 받아 그중 가장 작은 숫자를 반환하는 getMin() 함수를 작성하세요

- 답안

```c
#include <stdio.h>

int getMin(int a, int b, int c, int d) {
	int min = a;
	
	if(min > b) min = b;
	if(min > c) min = c;
	if(min > d) min = d;
	
	return min;
}
```

---

### 다음 코드는 계승을 계산하는 getFactorial() 함수의 예를 보인 것입니다. 설계 원칙 상 이 코드의 문제점으로 지적할 수 있는 부분은 무엇이며, 그 문제점을 수정하려면 어떻게 수정되어야 하는지 기술하세요

```c
#include <stdio.h>
int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	if (nParam < 1 || nParam > 10)
	{
		puts("ERROR: 1~10사이의 정수를 입력하세요.");
		return 0;
	}
	for (i = 1; i <= nParam; ++i)
		nResult *= i;
	return nResult;
}
int main(void)
{
	printf("MAX: %d\n", GetFactorial(1));
	printf("MAX: %d\n", GetFactorial(5));
	printf("MAX: %d\n", GetFactorial(11));
	printf("MAX: %d\n", GetFactorial(10));
	return 0;
}
```

- 답안
    - ui와 기능 분리 필요

```c
#include <stdio.h>

void getErrorMsg() {
	printf("ERROR! 1~10사이의 정수를 입력하세요 ");
}

int getFactorial(int param)
{
	int result = 1;

	if (param < 0 || param > 10) {
		getErrorMsg();
		return 0;
	}

	for (int i = 1; i <= param; i++) {
		result *= i;
	}
	return result;
}

void printFactorial() {
	printf("MAX: %d\n", getFactorial(1));
	printf("MAX: %d\n", getFactorial(5));
	printf("MAX: %d\n", getFactorial(11));
	printf("MAX: %d\n", getFactorial(10));
}

int main(void) {
	printFactorial();
	
	return 0;
}
```

---

### 기본요금과 나이를 매개변수로 받아서 나이에 따른 최종요금을 계산해 반환하는 getFee() 함수를 작성하세요. 단, 나이별 할인율은 다음과 같습니다.

```c
0~3 : 100%
4~13 : 50%
14~19 : 75%
20이상 : 0%
```

- 답안

```c
#include <stdio.h>

int getFee(int age) {
	int fee = 1000;
	if (age >= 14) {
		if (age >= 20) {
			
		}
		else {
			fee = (fee * 75) / 100;
		}
	}
	else {
		if (age >= 4) {
			fee = fee / 2;
		}
		else {
			fee = 0;
		}
	}
	return fee;
}

int main(void) {
	printf("3세의 요금은: %d 입니다.\n", getFee(3));
	printf("5세의 요금은: %d 입니다.\n", getFee(5));
	printf("27세의 요금은: %d 입니다.\n", getFee(27));

	return 0;
}
```
