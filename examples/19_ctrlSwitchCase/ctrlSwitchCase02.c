#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	char credit = 'X';

	printf("점수를 입력하세요: ");
	scanf("%d", &input);

	switch (input / 10) {
	case 10:
	case 9:
		credit = 'A';
		break;
	case 8:
		credit = 'B';
		break;
	case 7:
		credit = 'C';
		break;
	case 6:
		credit = 'D';
		break;
	case 5:
		credit = 'F';
	default :
		credit = 'X';
		puts("학사경고 ㄷㄷ");
	}
	printf("학점은: %c 입니다.", credit);
	return 0;
}