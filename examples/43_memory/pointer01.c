#include <stdio.h>

int main(void) {
	int data = 10;
	printf("%s\n", "data");

	//���� data�� ��� �ִ� ���� ���
	printf("%d\n", data);
	//���� data�� �޸� �ּҸ� ���
	printf("%p\n", &data);
	return 0;
}