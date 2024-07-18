#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE *fp = stdin;
	char buffer[32] = { 0 };
	fgets(buffer, sizeof(buffer), fp);
	fputs(buffer, stdout);
	return 0;
}