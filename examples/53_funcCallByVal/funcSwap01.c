#include <stdio.h>

//�Ű������� �ּҷ� �޴´�.
void swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char argv[]) {
	int x = 10, y = 20;

	//ȣ���� �Լ��� ����� ���������� �ּҸ� �����Ѵ�.
	//���� �Լ��� ��ȯ�� �� x�� y�� ���� ���� ��ȯ�ȴ�.
	swap(&x, &y);
	printf("X: %d, Y: %d", x, y);
	return 0;
}