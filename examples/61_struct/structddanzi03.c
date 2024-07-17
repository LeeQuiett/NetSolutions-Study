#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct USERDATA {
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
} USERDATA;

int main(void) {
	USERDATA user = { "손심바", "1234", NULL };
	USERDATA user2 = { "비와이", "박거손", NULL };

	//pNext 멤버를 이용해 두 인스턴스를 연결한다.
	user.pNext = &user2;
	
	printf("%s, %s\n", user.name, user.phone);

	//pNext 멤버를 이용해 구조상 다음 인스턴스에 접근한다.
	printf("%s, %s\n", user.pNext->name, user.pNext->phone);
	return 0;
}