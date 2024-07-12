#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	
	int x = 0, y = 5;
	int flag = -1;
	int length = 9;
	int counter = 1;

	for (length; length > 0; length -=2)
	{
		for (int i = 0; i < length; i++)
		{
			if (i < (length / 2) + 1) y += flag;
			else x += -flag;
			list[x][y] = counter++;
		} flag = -flag;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", list[i][j]);
		} putchar('\n');
	}
}