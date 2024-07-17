#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct MYBODY {
	int height;
	int weight;
} MYBODY;

typedef struct USERDATA {
	char name[32];
	char phone[32];
	MYBODY body;
} USERDATA;

int main(void) {
	USERDATA user = {
		"¼Õ½É¹Ù",
		"110.12",
		{50, 20}
	};

	printf("%s\t%s\t%d\t%d\n", user.name, user.phone, user.body.height, user.body.weight);

	return 0;
}