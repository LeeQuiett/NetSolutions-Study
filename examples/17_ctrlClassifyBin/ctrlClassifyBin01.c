#include <stdio.h>

int main(void) {
	int input = 0;
	char ch = 'A';

	printf("점수를 입력하세요: ");
	scanf_s("%d", &input);

	if (input >= 80) {
		if (input >= 90) {
			ch = 'A';
		}
		else {
			ch = 'B';
		}
	}
	else {
		if (input >= 70) {
			ch = 'C';
		}
		else {
			ch = 'D';
			if (input < 60) ch = 'F';
		}
	}

	printf("학점은 %c 입니다.\n", ch);

	return 0;
}