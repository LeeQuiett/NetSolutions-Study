#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _USERDATA {
	char name[16];
	char phone[16];
} USERDATA;

void main() {
	FILE* fp = NULL;
	USERDATA UserData = { 0 };

	//바이너리 읽기 모드로 파일을 개방한다.
	//만일 파일이 없다면 파일을 여는데 실패한다.
	fp = fopen("Test.dat", "rb");
	if (fp == NULL) return;

	//파일에서 바이너리 모드로 구조체를 한번에 읽고 출력한다.
	fread(&UserData, sizeof(USERDATA), 1, fp);
	puts(UserData.name);
	puts(UserData.phone);
	fclose(fp);
}