#include <stdio.h>

int main(void) {
	int i = 1, j = 0;

	while (i <= 9) {
		j = 2;
		while (j <= 9) {
			printf(" %d X %d = %d ", i, j, i * j);
			j++;
		} 
		printf("\n");
		i++;
	}

	return 0;
}