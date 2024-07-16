#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i = 0;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("%6d\n", rand());
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%6d\n", rand() % 10);
	}

	return 0;
}