#include <stdio.h>

int* testFunc(void) {
	int data = 10;
	//�Լ��� ��ȯ�ϸ� �Ҹ��� �ڵ������� �ּҸ� ��ȯ�Ѵ�.
	return &data;
}

int main(int argc, char* argv[]) {
	int* pResult = NULL;
	pResult = testFunc();

	//�����Ͱ� ����Ű�� ��� �޸𸮴� ��ȿ���� ���� �޸��̴�.
	printf("%d\n", *pResult);
	return 0;
}