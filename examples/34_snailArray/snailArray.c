#include <stdio.h>

int main(void) {
	int snail[5][5] = { '\0'};
	int counter = 1;
	int minI = 1;

	int flag = 1;
	int maxLoop = 4;
	int minLoop = -1;

	int i = 0, j = 0;

	for (int k = 0; k < 5; k++)
	{
		for (j; j <= maxLoop && j >= minLoop; j += flag)
		{
			snail[i][j] = counter++;
		}
		i += flag;
		if (flag == 1) {
			j--;
		}
		else if (flag == -1) {
			j++;
		} 
		++minLoop;
		for (i; i <= maxLoop && i >= minLoop; i += flag)
		{
			snail[i][j] = counter++;
		}
		if (flag == 1)
		{
			i--;
		}
		else if (flag == -1)
		{
			i++;
		}
		flag = -flag;
		--maxLoop;
		++minLoop;
		j += flag;
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", snail[i][j]);
		} putchar('\n');
	}

	return 0;
}