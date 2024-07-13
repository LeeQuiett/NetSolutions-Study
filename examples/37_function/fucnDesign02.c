#include <stdio.h>

//����� ���ϴ� ����� ������ �޽����� ��������� �ʴ´�.
int getFactorial(int param) {
	int result = 1;

	//�Ű����� ���� ��ȿ���� �ʴٸ� 0�� ��ȯ�����ν�
	//ȣ���� �Լ��� ������ �˸���!
	if (param > 10 || param < 1) return 0;

	for (int i = 1; i <= param; i++) {
		result *= i;
	}
	return result;
}


int main(void) {
	int result = 0, input = 0;

	printf("����� ���� ����(1~10)�� �Է��ϼ���: ");
	scanf_s("%d", &input);

	result = getFactorial(input);
	if (result == 0) {
		puts("ERROR: 1~10������ ������ �Է��ϼ���.");
		return 0;
	}
	printf("Result: %d", result);
	return 0;
}