#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct USERDATA {
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
} USERDATA;

int main(void) {
	USERDATA user = { "�սɹ�", "1234", NULL };
	USERDATA user2 = { "�����", "�ڰż�", NULL };

	//pNext ����� �̿��� �� �ν��Ͻ��� �����Ѵ�.
	user.pNext = &user2;
	
	printf("%s, %s\n", user.name, user.phone);

	//pNext ����� �̿��� ������ ���� �ν��Ͻ��� �����Ѵ�.
	printf("%s, %s\n", user.pNext->name, user.pNext->phone);
	return 0;
}