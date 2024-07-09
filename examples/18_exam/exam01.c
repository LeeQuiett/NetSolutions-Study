#include <stdio.h>

int main(void) {
	int defaultFare = 1000;
	int age = 0;

	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);

	if (age >= 14) {
		if (age >= 20) {
			defaultFare = 1000;
		}
		else {
			defaultFare = ((defaultFare * 75) / 100);
		}
	}
	else {
		if (age >= 4) {
			defaultFare = ((defaultFare * 50) / 100);
		}
		else {
			defaultFare = 0;
		}
	}

	printf("최종요금: %d원", defaultFare);

	return 0;
}