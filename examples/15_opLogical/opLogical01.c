#include <stdio.h>

int main(void) {
	int nInput = 0, bResult = 0;

	scanf_s("%d%*c", &nInput);
	bResult = nInput < 4 || nInput >= 60;
	printf("Result: %d (1: True, 0: Flase)\n", bResult);

	scanf_s("%d%*c", &nInput);
	bResult = nInput > 3 && nInput < 20;
	printf("Result: %d (1: True, 0: False)", bResult);

	return 0;
}