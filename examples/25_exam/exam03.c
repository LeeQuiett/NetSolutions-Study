#include <stdio.h>

int main(void) {
	for (int i = 1; i < 6; i++) {
		for (int k = i; k < 5; k++) {
			printf("  ");
		}
		for (int j = 0; j < (i * 2)-1; j++) {
			printf(" *");
		} printf("\n");
	}
}