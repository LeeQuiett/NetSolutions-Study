#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

int main(void) {
	USERDATA userList[4] = {
		{10, "����", "1234"},
		{11, "�谨��", "1234"},
		{13, "�սɹ�", "0000"},
		{14, "����ũ��", "1234"}
	};
	for (int i = 0; i < 4; i++)
	{
		printf("%d�� %s %s\n", userList[i].age, userList[i].name, userList[i].phone);
	}
	return 0;
}