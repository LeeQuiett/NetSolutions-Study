#include <stdio.h>
//_msize() �Լ��� ���� ��� ����
#include <malloc.h>
#include <string.h>

int main(void) {
	char* pszBuffer = NULL, * pszNewBuffer = NULL;

	//12 ����Ʈ �޸𸮸� ���� �Ҵ��� ��
	pszBuffer = (char*)malloc(sizeof(char) * 12);
	//NULL ���ڸ� ������ ���� 11�ڸ� �����Ѵ�.
	sprintf(pszBuffer, "%s", "Testtring");
	//���� �Ҵ��� �޸��� �ּ�, ũ��, ����� ���ڿ� ���� ����Ѵ�.
	printf("[%p] %d %s\n", pszBuffer, _msize(pszBuffer), pszBuffer);

	//12����Ʈ�� �޸𸮸� 32 ����Ʈ�� 'Ȯ��'�� �õ��Ѵ�.
	pszNewBuffer = (char*)realloc(pszBuffer, 32);
	if (pszNewBuffer == NULL) {
		free(pszBuffer);
	}
	//���ڿ��� ����� �ּ�, �޸� ũ��, ����� ������ Ȯ���Ѵ�.
	sprintf(pszNewBuffer, "%s", "TestString");
	printf("[%p] %d, %s", pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer);

	free(pszNewBuffer);
	return 0;
}