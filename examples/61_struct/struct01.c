#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//구조체 선언
struct USERDATA
{
	int age;
	char name[32];
	char phone[32];
};

int main(void) {
	//USERDATA 구조체 변수 user 선언 및 정의
	struct USERDATA user = { 0, "", "" };

	//구조체 멤버 접근 및 값 채우기
	user.age = 10;
	strcpy(user.name, "Sangho");
	strcpy(user.phone, "010-2121-7777");

	//구조체 멤버 접근 및 출력
	printf("%d살, %s, %s\n", user.age, user.name, user.phone);
	return 0;
}