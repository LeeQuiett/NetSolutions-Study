#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#pragma pack(push, 1)

typedef struct USERDATA {
	char ch;
	int age;
} USERDATA;

typedef struct MYDATA {
	char ch;
	int age;
	double data;
} MYDATA;

int main(void) {
	printf("%d\n", sizeof(USERDATA));
	printf("%d\n", sizeof(MYDATA));
	return 0;
}