#include <stdio.h>

int main(void) {
	int multiArray[5][5] = { 0 };
	int index = 1;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < 5; j++)
			{
				multiArray[i][j] = index++;
			}
		}
		else {
			for (int k = 4; k >= 0; k--)
			{
				multiArray[i][k] = index++;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", multiArray[i][j]);
		} putchar('\n');
	}

	return 0;
}