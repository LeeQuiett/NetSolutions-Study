#include <stdio.h>

int main(void) {
	int list[5] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", list[i]);
	} putchar('\n');

	list[0] = 100;
	list[3] = 200;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", list[i]);
	} putchar('\n');
	return 0;
}