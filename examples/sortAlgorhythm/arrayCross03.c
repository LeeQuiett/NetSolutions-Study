#include <stdio.h>

int main(void) {
	int list[5][5] = { 0 };
	int counter = 1;
	int flag = 1;

	for (int i = 0; i < 5; i++)
	{
		if (flag) {
			for (int j = 0; j < 5; j++)
			{
				list[i][j] = counter++;
			} flag = 0;
		}
		else {
			for (int j = 0; j < 5; j++)
			{
				list[i][4 - j] = counter++;
			} flag = 1;
		}		
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