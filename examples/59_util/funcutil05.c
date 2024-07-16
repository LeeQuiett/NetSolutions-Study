#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main() {
	char command[512] = { 0 };
	printf("Input command: ");
	gets(command);

	system(command);
}