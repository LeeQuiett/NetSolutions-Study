#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _USERDATA {
	char name[16];
	char phone[16];
} USERDATA;

void main() {
	FILE* fp = NULL;
	USERDATA UserData = { 0 };

	//���̳ʸ� �б� ���� ������ �����Ѵ�.
	//���� ������ ���ٸ� ������ ���µ� �����Ѵ�.
	fp = fopen("Test.dat", "rb");
	if (fp == NULL) return;

	//���Ͽ��� ���̳ʸ� ���� ����ü�� �ѹ��� �а� ����Ѵ�.
	fread(&UserData, sizeof(USERDATA), 1, fp);
	puts(UserData.name);
	puts(UserData.phone);
	fclose(fp);
}