#include <stdio.h>
#include <string.h>

int main(void) {
    char szBuffer[12] = { "TestString" };
    char* pszData = "TestString";
    size_t length = strlen(pszData);  // ���ڿ��� ���� ���̸� ���մϴ�.

    // �� �޸𸮿� ����� ���� ���� ���
    printf("%d\n", memcmp(szBuffer, pszData, length));

    // ����("teststring")�� �� ū ���
    printf("%d\n", memcmp("testString", pszData, length));

    // ������(pszData)�� �� ū ���
    printf("%d\n", memcmp("DataString", pszData, length));

    return 0;
}