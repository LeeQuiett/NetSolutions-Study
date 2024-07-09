#include <stdio.h>

int main(void) {
	int input = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d%*c", &input);
	printf("5로 나눈 결과는: %d", input / 5);

	return 0;
}