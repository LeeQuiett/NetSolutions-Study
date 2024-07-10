#include <stdio.h>

int main(void) {
	int list[5] = { 0 };
	int i = 0;

	for (int i = 0; i < sizeof(list) / sizeof(list[0]); i++)
	{
		scanf_s("%d", &list[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d  ", list[i]);
	}
	return 0;
}