#include <stdio.h>

int main(void) {
	int list[5] = { 0 };
	int max = 0, min = 9999;
	
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &list[i]);
		if (max < list[i]) {
			max = list[i];
		}
		if (min > list[i]) {
			min = list[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\nMAX: %d, MIN: %d", max, min);
	return 0;
}