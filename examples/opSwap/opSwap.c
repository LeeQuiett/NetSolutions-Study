#include <stdio.h>

int main(void) {
	int x = 10, y = 20, tmp = 0;

	printf("before: x = %d, y = %d\n", x, y);
	tmp = x;
	x = y;
	y = tmp;

	printf("after: x = %d, y = %d", x, y);

	return 0;
}