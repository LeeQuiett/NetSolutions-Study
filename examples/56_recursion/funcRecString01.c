#include <stdio.h>

void putData(char* param) {
	//���ڿ��� ���̸� �� �̻� ���ȣ�� ���� �ʰ� ��ȯ�Ѵ�.
	if (*param == '\0') return;
	
	//���� �� ������ ���� ������ �ٲٸ� ���ڿ��� �������� ��µȴ�.
	putchar(*param);
	//���� ���ڸ� ����Ű�� �ּҸ� �Ű������� ���ȣ���Ѵ�.
	putData(param + 1);
}

int main(void) {
	putData("TestData");
	putchar('\n');
	return 0;
}