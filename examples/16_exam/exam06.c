#include <stdio.h>

int main(void) {
	int defaultFare = 1000;
	int age = 0;

	scanf_s("%d", &age);

	if (age < 20) {
		printf("최종요금: %d", (defaultFare * 75) / 100);
	}
	else {
		printf("최종요금: %d", defaultFare);
	}

	return 0;
}