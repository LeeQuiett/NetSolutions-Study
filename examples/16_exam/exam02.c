#include <stdio.h>

int main(void) {
	int max = 0;
	int a, b, c;

	//��ʸ�Ʈ ���
	scanf_s("%d%d%d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	printf("MAX : %d\n", max);
	return 0;
}