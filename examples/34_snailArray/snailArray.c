#include <stdio.h>	

int main(void) {
	int list[5][5] = { 0 };
	int x = -1, y = 0, counter = 0;
	int i = 0, j = 0, length = 9, direction = 1;

	for (length = 9; length > 0; length -= 2) {
		for (i = 0; i < length; i++) {
			if (i < (length / 2) + 1) x += direction;
			else y += direction;

			list[y][x] = ++counter;
		}
		direction = -direction;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
}