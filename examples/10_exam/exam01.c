#include <stdio.h>

int main(void) {
	double numA = 0, numB = 0;
	double result = 0;

	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%lf%lf", &numA, &numB);

	result = (numA + numB) / 2;
	printf("AVG: %.2f", result);
}