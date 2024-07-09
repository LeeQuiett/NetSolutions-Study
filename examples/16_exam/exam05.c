#include <stdio.h>

int main(void) {
	//if 문을 이용한 최댓값 구하기

	int max = -9999, input = 0;
	scanf_s("%d%*c", &input);

	if (max > input) {
	}
	else {
		max = input;
	}

	scanf_s("%d%*c", &input);

	if (max > input) {
	}
	else {
		max = input;
	}

	scanf_s("%d%*c", &input);

	if (max > input) {
	}
	else {
		max = input;
	}

	printf("MAX: %d", max);
	
	return 0;
}