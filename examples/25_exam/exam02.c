#include <stdio.h>

int main(void) {
	int i = 0, j = 0;

	for (i = 0; i < 5; i++) {
		for (j = i; j < 4; j++) {
			printf("  ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf(" *");
		}	printf("\n");
	}
}