#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	int i = 0, temp = 0;

	for (i = 1; i < 5; i++)
	{
		if (list[0] > list[i]) {
			temp = list[0];
			list[0] = list[i];
			list[i] = temp;
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", list[i]);
	}
}