#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int i = 0, j = 0;
	int flag = 1;
	int counter = 1;

	for (i; i < 5; i++)
	{

		for (j; j < 5 && j >=0; j+=flag)
		{
			list[j][i] = counter++;
		}
		flag = -flag;
		//i += flag;
		j += flag;
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