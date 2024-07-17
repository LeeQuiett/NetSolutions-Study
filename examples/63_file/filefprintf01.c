#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE* fp = NULL;
	//현재 경로에 Test.txt 파일을 생성한다.
	fp = fopen("Test.txt", "w");

	fprintf(fp, "%s\n", "Test string");
	fprintf(fp, "%s\n", "Hello World");

	fclose(fp);
	system("notepad.exe Test.txt");
}