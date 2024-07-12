#include <stdio.h>

int add(int a, int b) {
	int data = 0;
	data = a + b;

	return data;
}

int main(void) {
	int result = 0;
	result = add(3, 4);
	printf("result: %d\n", result);
	return 0;
}