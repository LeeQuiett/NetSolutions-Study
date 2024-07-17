#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

int main(void) {
	USERDATA userList[4] = {
		{10, "±è±è±è", "1234"},
		{11, "±è°¨Àü", "1234"},
		{13, "¼Õ½É¹Ù", "0000"},
		{14, "¼­¸®Å©·ç", "1234"}
	};
	for (int i = 0; i < 4; i++)
	{
		printf("%d»ì %s %s\n", userList[i].age, userList[i].name, userList[i].phone);
	}
	return 0;
}