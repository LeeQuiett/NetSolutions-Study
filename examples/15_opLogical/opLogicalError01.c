#include <stdio.h>

int main(void) {
	int input = 0, result = 0;
	scanf_s("%d", &input);
	result = 2 < input < 20;
	printf("�̷��� �ȵſ�~ �׻� ���̰� �˴ϴ�. result: %d", result);

	return 0;
}