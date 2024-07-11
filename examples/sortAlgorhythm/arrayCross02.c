#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int counter = 0, offset = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			counter = i * 5;
		}
		else {
			counter = (i + 1) * 5 + 1;
		}
		for (int j = 0; j < 5; j++)
		{
			counter += offset;
			list[i][j] = counter;
		}
		offset = -offset;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}

	return 0;
}