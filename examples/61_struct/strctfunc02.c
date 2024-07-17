#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

//구조체 인스턴스가 아니라
//구조체에 대한 '포인터'를 매개변수로 받는다.

void getUserData(USERDATA* pUser) {
	scanf("%d%*c", &pUser->age);
	gets_s(pUser->name, sizeof(pUser->name));
	gets_s(pUser->phone, sizeof(pUser->phone));
}

int main(void) {
	USERDATA user = { 0 };
	getUserData(&user);
	printf("%d살\t%s\t%s\n", user.age, user.name, user.phone);

	return;
}