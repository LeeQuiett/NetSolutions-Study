#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, temp = 0;
	
	for (i; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (list[i] > list[j]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", list[i]);
	}
	putchar('\n');
	return 0;
}
