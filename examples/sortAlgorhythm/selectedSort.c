#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	int k = 0;
	while (k < 5) {
		printf("%d ", list[k]);
		k++;
	}

	return 0;
}