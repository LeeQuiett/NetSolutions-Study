#include <stdio.h>

int main(void) {
	int sum = 0, count = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 4) == 0) {
			sum += i;
			count++;
		}
	}
	printf("4�� ����� ���� %d, ���� %d", count, sum);
}