#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	int i = 1;

	scanf("%d", &input);
	if (input < 2 || input >9) {
		puts("ERROR");
		return 1;
	}
	while (i < 10) {
		printf("%d X %d = %d \n", input, i, input * i);
		i++;
	}

	return 0;
}