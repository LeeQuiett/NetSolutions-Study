#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

//����ü �ν��Ͻ��� �ƴ϶�
//����ü�� ���� '������'�� �Ű������� �޴´�.

void getUserData(USERDATA* pUser) {
	scanf("%d%*c", &pUser->age);
	gets_s(pUser->name, sizeof(pUser->name));
	gets_s(pUser->phone, sizeof(pUser->phone));
}

int main(void) {
	USERDATA user = { 0 };
	getUserData(&user);
	printf("%d��\t%s\t%s\n", user.age, user.name, user.phone);

	return;
}