#include <stdio.h>

int getFactorial(int param) {
	int result = 1, i = 0;
	if (param < 1 || param > 10) {
		//�Ű������� ���� ���� ���� ��ȿ���� �ʴٴ� �޽����� ����Ѵ�.
		//'�޽��� ���'�� UI�� �ش��ϹǷ� �Լ� ������
		//ó���ϴ� ���� �ٶ������� �ʴ�.
		puts("ERROR: 1~10������ ������ �Է��ϼ���.");
		return 0;
	}

	//����� ����ϰ� ��ȯ�Ѵ�.
	for (i = 1; i <= param; i++)
	{
		result *= i;
	}
	return result;
}

int main(void) {
	printf("MAX: %d\n", getFactorial(1));
	printf("MAX: %d\n", getFactorial(5));
	printf("MAX: %d\n", getFactorial(11));
	printf("MAX: %d\n", getFactorial(10));

	return 0;
}