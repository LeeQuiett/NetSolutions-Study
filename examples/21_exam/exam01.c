#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	int i = 0;
	printf("�Է��� ���ڸ�ŭ '*'�� ����մϴ�: ");

	scanf("%d", &input);
	while (i < input) {
		printf("*");
		i++;
	} printf("\n");

	return 0;
}