#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* fp = NULL;
	char ch;
	
	fp = fopen("Test.txt", "w");
	fputs("Test string!", fp);
	fclose(fp);

	fp = fopen("Test.txt", "r");
	if (fp == NULL)
		return;

	while ((ch = fgetc(fp)) != EOF)
		putchar(ch);

	fclose(fp);
}