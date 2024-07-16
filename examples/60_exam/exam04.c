#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int compareStrings(const char* a, const char* b) {
    while (*a != '\0' && *b != '\0') {
        char lowerA = tolower((unsigned char)*a);
        char lowerB = tolower((unsigned char)*b);

        if (lowerA != lowerB) {
            return 1; // ���ڿ��� �ٸ�
        }
        a++;
        b++;
    }

    // �� ���ڿ��� ��� �������� ����
    return (*a == '\0' && *b == '\0') ? 0 : 1;
}

int main(void) {
    char aData[] = "hello";
    char bData[] = "HELLO";
    int result = compareStrings(aData, bData);
    printf("���: %d\n", result);

    return 0;
}
