#include <stdio.h>

//�ּҸ� �Ű������� ���� ���� ��� �޸��� ũ�⸦ �Բ� �޴� ���� ����.
void getName(char* pName, int size) {
	printf("�̸��� �Է��ϼ���: ");
	//�Ű������� ���޹��� �ּҸ� �ٽ� gets_()�Լ��� �μ��� �ѱ��.
	gets_s(pName, size);
}

int main(int argc, char* argv[]) {
	char name[32] = { 0 };

	//�迭(�ּ�)�� �迭�� ũ�⸦ �Լ��� �Ű������� �����Ѵ�.
	getName(name, sizeof(name));
	printf("����� �̸��� %s�Դϴ�.\n", name);
	return 0;
}