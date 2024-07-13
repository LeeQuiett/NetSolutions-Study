#include <stdio.h>

int add(int, int);

int main(void) {
	printf("%d\n", add(3, 4));
	return 0;
}

int add(int x, int y) {

	return x + y;
}