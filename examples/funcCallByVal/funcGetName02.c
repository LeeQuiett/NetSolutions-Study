#include <stdio.h>
#include <stdlib.h>

//�ּҸ� ��ȯ�ϴ� ����� ���� �Լ� ���� �� ����
char* getName(void) {
	char* pName = NULL;
	
	//�޸𸮸� ���� �Ҵ��Ѵ�.
	pName = (char*)calloc(32, sizeof(char));
	printf("�̸��� �Է��ϼ���: ");

	//���� �Ҵ��� �޸𸮿� ����ڰ� �Է��� ���ڿ��� �����Ѵ�.
	gets_s(pName, sizeof(char)*32);
	//���� �Ҵ��� �޸��� �ּҸ� ȣ���� �Լ��� ��ȯ�Ѵ�.
	return pName;
}

int main(int argc, char* argv) {
	char* pName = NULL;

	pName = getName();
	printf("����� �̸��� %s�Դϴ�.\n", pName);

	//ȣ���� �Լ� �޸𸮸� �����ؾ� �Ѵ�!
	free(pName);
	return 0;
}