#include <stdio.h>

void main(void) {
	FILE* fp = NULL;

	fp = fopen("Test.txt", "w");
	if (fp == NULL) {
		perror("���� ���� ����!");
		return;
	}

	fclose(fp);
}