#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	fp = fopen("TestFile.txt", "a+");
	char buffer[32] = { 0 };
	fgets(buffer, 32, stdin);
	fputs(buffer, fp);
	fclose(fp);
	return 0;
}