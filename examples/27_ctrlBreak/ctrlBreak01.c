#include <stdio.h>

int main(void) {
	int i = 0;

	for (i = 0; i < 10; i++) {
		if (i > 4) {
			continue;
		}
		printf("%dth\n", i);
	}
	printf("End: %d", i);
	return 0;
}