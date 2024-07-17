#include <stdio.h>

void main(void) {
	FILE* fp = NULL;

	fp = fopen("Test.txt", "w");
	if (fp == NULL) {
		perror("파일 오픈 실패!");
		return;
	}

	fclose(fp);
}