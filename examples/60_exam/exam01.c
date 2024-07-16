#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findSubstringIndex(const char* str, const char* substr) {
    char* pStr = str;
    char* pSubstr;
    char* pMatch;

    while (pStr != '\0') {
        pSubstr = substr;
        pMatch = pStr;

        while (*pSubstr != '\0' && *pSubstr == *pMatch) {
            pSubstr++;
            pMatch++;
        }
        if (*pSubstr == '\0') return pStr - str;
        
        pStr++;
    }
    return -1;
}


int main() {
    const char* str = "Hello, World!";  // �˻� ��� ���ڿ�
    const char* substr = "World";  // ã���� �ϴ� ���ڿ�

    int index = findSubstringIndex(str, substr);  // �Լ� ȣ��
    if (index != -1) {
        printf("Substring found at index: %d\n", index);  // ��ġ�ϴ� ���ڿ��� �ε����� ���
    }
    else {
        printf("Substring not found\n");  // ��ġ�ϴ� ���ڿ��� ã�� ���� ��� �޽��� ���
    }

    return 0;
}
