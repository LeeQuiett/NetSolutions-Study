#include <stdio.h>

int main(void) {
	//�����̹� ���
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