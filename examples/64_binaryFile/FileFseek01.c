#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* fp = NULL;
	fp = fopen("Test.dat", "rb");

	//���� ����� �����͸� ������ ������ �̵���Ų��.
	fseek(fp, 0, SEEK_END);
	//�ռ� ���� ����� �����͸� �� ������ �Ű����Ƿ� ���� ũ�⸦ �� �� �ִ�.
	printf("size of Test.dat : %u\n", ftell(fp));

	fclose(fp);
}