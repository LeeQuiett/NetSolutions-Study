#include <stdio.h>

int getFee(int age) {
	int fee = 1000;
	if (age >= 14) {
		if (age >= 20) {
			
		}
		else {
			fee = (fee * 75) / 100;
		}
	}
	else {
		if (age >= 4) {
			fee = fee / 2;
		}
		else {
			fee = 0;
		}
	}
	return fee;
}

int main(void) {
	printf("3���� �����: %d �Դϴ�.\n", getFee(3));
	printf("5���� �����: %d �Դϴ�.\n", getFee(5));
	printf("27���� �����: %d �Դϴ�.\n", getFee(27));

	return 0;
}