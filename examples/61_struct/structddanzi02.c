#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

int main(void) {
	USERDATA* pUser = NULL;

	pUser = (USERDATA*)malloc(sizeof(USERDATA));

	pUser->age = 10;
	strcpy(pUser->name, "�սɹ��Ǿ�����");
	strcpy(pUser->phone, "110.01");

	printf("%d��\t%s\t%s\n", pUser->age, pUser->name, pUser->phone);

	free(pUser);
	return 0;
}