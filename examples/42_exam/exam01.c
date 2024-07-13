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