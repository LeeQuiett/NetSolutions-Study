#include <stdio.h>

//����� ����ϰ� ����� ��ȯ�ϴ� �Լ�
int getFactorial(int param) {
	int result = 0;
	//���ȣ���� ������ ���� ���ǽ�! �ݺ����� ���ǽİ� ����.
	if (param == 1) return 1;

	result = param * getFactorial(param-1);
	return result;
}

int main(void) {
	printf("5! == %d", getFactorial(5));
	return 0;
}