#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	char credit = 'X';

	printf("������ �Է��ϼ���: ");
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
		puts("�л��� ����");
	}
	printf("������: %c �Դϴ�.", credit);
	return 0;
}