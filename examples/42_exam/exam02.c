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
	printf("3세의 요금은: %d 입니다.\n", getFee(3));
	printf("5세의 요금은: %d 입니다.\n", getFee(5));
	printf("27세의 요금은: %d 입니다.\n", getFee(27));

	return 0;
}