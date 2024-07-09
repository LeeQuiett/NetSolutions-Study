#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	while (i < 5) {
		while (j < 5) {
			printf("* ");
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	
	return 0;
}