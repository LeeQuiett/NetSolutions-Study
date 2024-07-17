#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//구조체 선언 및 형 재선언
typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

int main(void) {
	USERDATA user = { 0,"","" };

	user.age = 10;
	strcpy(user.name, "haha");
	strcpy(user.phone, "010-2907-5067");

	printf("%d살, %s, %s\n", user.age, user.name, user.phone);
	return 0;
}