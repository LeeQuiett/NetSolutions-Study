#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//������ �迭 ����� ũ�⸦ ������� �ʾ����� �ʱ갪�� ��������
	//�ڵ����� ũ�Ⱑ ���� �ȴ�(NULL ���� ����� ũ�� ����).
	char szBuffer[] = { "Hello" }; //���������� szBuffer �迭�� ����ϴ� ���� �޸��� �ʱ갪�� ��

	//"Hello" ���ڿ��� ����� �޸��� �ּҷ� �ʱ�ȭ�Ǵ� ������ ����
	char* pszBuffer = "Hello"; //������ ���� �� �б����� ���� ��򰡿� "Hello"��� ���ڿ��� ����� ��

	//���� �Ҵ��� �޸��� �ּҰ� ����� ������ ���� �� ����
	char* pszData = NULL;
	//�޸𸮸� �������� �Ҵ��ϰ� "Hello"���ڿ��� �ʱ�ȭ
	pszData = (char*)malloc(sizeof(int) * 6);
	pszData[0] = 'H';
	pszData[1] = 'e';
	pszData[2] = 'l';
	pszData[3] = 'l';
	pszData[4] = 'o';
	pszData[5] = '\0'; //���ڿ��� ���� �ǹ��ϴ� NULL ����

	puts(szBuffer);
	puts(pszBuffer);
	puts(pszData);

	//free(pszBuffer);
	free(pszData);

	return 0;
}