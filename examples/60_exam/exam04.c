#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int compareStrings(const char* a, const char* b) {
    while (*a != '\0' && *b != '\0') {
        char lowerA = tolower((unsigned char)*a);
        char lowerB = tolower((unsigned char)*b);

        if (lowerA != lowerB) {
            return 1; // 문자열이 다름
        }
        a++;
        b++;
    }

    // 두 문자열이 모두 끝났으면 같음
    return (*a == '\0' && *b == '\0') ? 0 : 1;
}

int main(void) {
    char aData[] = "hello";
    char bData[] = "HELLO";
    int result = compareStrings(aData, bData);
    printf("결과: %d\n", result);

    return 0;
}
