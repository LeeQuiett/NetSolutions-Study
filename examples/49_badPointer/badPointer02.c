#include <stdio.h>

int main(void) {
	char* pszBuffer = NULL;

	pszBuffer = (char*)malloc(12);
	gets(pszBuffer);
	puts(pszBuffer);

	//���� Ȯ���� ���� �ǵ������� �������� ����
	//free(pszBuffer);
	return 0;
}