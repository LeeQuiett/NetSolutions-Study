#include <stdio.h>

int main(void) {
	int input = 0;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d%*c", &input);
	printf("5�� ���� �����: %d", input / 5);

	return 0;
}