#include <stdio.h>

int getTotal(int list[5][4]) {
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += list[i][j];
		}
	}

	return sum;
}

int main(void) {
	int list[5][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},
		{17, 18, 19, 20}
	};


	int sum = getTotal(list);
	printf("%d\n", sum);

	return 0;
}