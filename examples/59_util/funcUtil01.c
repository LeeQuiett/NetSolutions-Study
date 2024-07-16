#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	char buffer[32];
	int result = 0;

	printf("Input string: ");
	gets(buffer);

	result = atoi(buffer);
	printf("%d\n", result);
}