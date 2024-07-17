#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct USERDATA {
	int age;
	char name[32];
	char phone[32];
} USERDATA;

USERDATA getUserData(void) {
	USERDATA user = { 0 };

	scanf("%d%*c", &user.age);
	gets_s(user.name, sizeof(user.name));
	gets_s(user.phone, sizeof(user.phone));
	return user;
}

int main(void) {
	USERDATA user = { 0 };

	user = getUserData();
	printf("%d»ì\t%s\t%s\n", user.age, user.name, user.phone);

	return 0;
}