#include <stdio.h>

int getMax(int a, int b, int c) {
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;

	return max;
}

int main(void) {
	int result = 0;
	printf("MAX: %d\n", getMax(1, 2, 3));

	result = getMax(1, 3, 5);
	printf("%d\n", result);

	return 0;
}