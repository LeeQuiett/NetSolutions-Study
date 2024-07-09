#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char operator = 0;
	int x = 0, y = 0, result = 0;

	scanf("%d%c%d", &x, &operator, &y);

	switch (operator) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		puts("ERROR: 알 수 없는 산술 연산입니다.");
	}

	printf("Result: %d\n", result);

	return 0;
}