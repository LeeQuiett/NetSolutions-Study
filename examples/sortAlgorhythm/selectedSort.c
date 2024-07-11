#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int minIndex = 0, temp = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (list[minIndex] > list[j]) {
				minIndex = j;
			}
 		}
		if (list[i] > list[minIndex]) {
			temp = list[i];
			list[i] = list[minIndex];
			list[minIndex] = temp;
		}
	}
	int k = 0;
	while (k < 5) {
		printf("%d ", list[k]);
		k++;
	}
}