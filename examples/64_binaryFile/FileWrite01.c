#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _USERDATA {
	char name[16];
	char phone[16];
} USERDATA;

void main() {
	FILE* fp = NULL;
	USERDATA UserData = { "Sim-Ba", "123-1234" };

	//���̳ʸ� ���� ���� ������ ����(����)�Ѵ�.
	fp = fopen("Test.dat", "wb");
	if (fp == NULL) return;

	//����ü�� �� ���� ���̳ʸ� ���� ���Ͽ� ����.
	fwrite(&UserData, sizeof(USERDATA), 1, fp);
	system("notepad.exe ./Test.dat");
	fclose(fp);
}