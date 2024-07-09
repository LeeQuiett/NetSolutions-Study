#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	int i = 0;
	printf("입력한 숫자만큼 '*'을 출력합니다: ");

	scanf("%d", &input);
	while (i < input) {
		printf("*");
		i++;
	} printf("\n");

	return 0;
}