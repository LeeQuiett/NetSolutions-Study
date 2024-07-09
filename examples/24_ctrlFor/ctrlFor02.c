#include <stdio.h>

int main(void) {
	int sum = 0;
	int i = 1;

	while (i <= 10) {
		sum += i;
		i++;
	}
	printf("SUM: %d", sum);

	return 0;
}