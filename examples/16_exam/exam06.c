#include <stdio.h>

int main(void) {
	int defaultFare = 1000;
	int age = 0;

	scanf_s("%d", &age);

	if (age < 20) {
		printf("�������: %d", (defaultFare * 75) / 100);
	}
	else {
		printf("�������: %d", defaultFare);
	}

	return 0;
}