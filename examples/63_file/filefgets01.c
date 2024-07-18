#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	FILE* fp = NULL;
	char buffer[512] = { 0 };

	fp = fopen("Test.txt", "w");
	fputs("Test\n", fp);
	fputs("String\n", fp);
	fputs("Data\n", fp);
	fclose(fp);

	fp = fopen("Test.txt", "r");
	if (fp == NULL)
		return;

	while (fgets(buffer, sizeof(buffer), fp)) {
		printf("%s", buffer);
		memset(buffer, 0, sizeof(buffer));
	}

	fclose(fp);
}