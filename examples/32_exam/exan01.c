#include <stdio.h>

int main(void) {
	int list[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i!=2 && j == 3) {
				list[i][j] = (list[i][j - 1] + list[i][j - 2] + list[i][j - 3]);
			}
			if (i == 2) {
				list[i][j] = (list[i - 1][j] + list[i - 2][j]);
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
	return 0;
}