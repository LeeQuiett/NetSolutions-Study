#include <stdio.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	//���� �ڵ���� �� ���ڿ��� ������ ���ϴ� ���� �ƴ϶�
	//���ڿ��� ����� �޸��� ��ġ�� ������ ���ϴ� ���̴�.
	/*printf("%d\n", szBuffer == pszData);
	printf("%d\n", "TestString" == pszData);
	printf("%d\n", "DataString" == "TestString");*/

	//���� �ڵ���� �ּҿ� ������� ��� �޸𸮿� �����
	//���ڿ��� ������ ���Ѵ�.
	//���� �⸮�� �ٸ��� ������ ���� ���ڿ��� �ƴϴ�.
	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", pszData));

	return 0;
}