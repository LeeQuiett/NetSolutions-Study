#include <stdio.h>

int main(void) {
	int list[5] = { 30,10,40,20,50 };

	int i = 0, max = list[0];

	for (i = 1; i < 5; i++) {
		if (max < list[i]) {
			max = list[i];
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", list[i]);
	} putchar('\n');
	printf("MAX: %d", max);
	return 0;
}