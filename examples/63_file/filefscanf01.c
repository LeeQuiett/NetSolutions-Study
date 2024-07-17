#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int data = 0;
	char buffer[128] = { 0 };
	FILE* fp = NULL;

	fp = fopen("fscanfTest.txt", "w");
	fprintf(fp, "%d,%s\n", 20, "Test");
	fclose(fp);

	fp = fopen("fscanfTest.txt", "r");
	fscanf(fp, "%d,%s\n", &data, &buffer);
	fclose(fp);

	printf("%d, %s\n", data, buffer);
}