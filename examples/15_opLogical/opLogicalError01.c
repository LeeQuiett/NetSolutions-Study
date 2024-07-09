#include <stdio.h>

int main(void) {
	int input = 0, result = 0;
	scanf_s("%d", &input);
	result = 2 < input < 20;
	printf("이러면 안돼요~ 항상 참이게 됩니다. result: %d", result);

	return 0;
}