#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//����ü ����
struct USERDATA
{
	int age;
	char name[32];
	char phone[32];
};

int main(void) {
	//USERDATA ����ü ���� user ���� �� ����
	struct USERDATA user = { 0, "", "" };

	//����ü ��� ���� �� �� ä���
	user.age = 10;
	strcpy(user.name, "Sangho");
	strcpy(user.phone, "010-2121-7777");

	//����ü ��� ���� �� ���
	printf("%d��, %s, %s\n", user.age, user.name, user.phone);
	return 0;
}