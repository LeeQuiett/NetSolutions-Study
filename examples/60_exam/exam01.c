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
    const char* str = "Hello, World!";  // 검색 대상 문자열
    const char* substr = "World";  // 찾고자 하는 문자열

    int index = findSubstringIndex(str, substr);  // 함수 호출
    if (index != -1) {
        printf("Substring found at index: %d\n", index);  // 일치하는 문자열의 인덱스를 출력
    }
    else {
        printf("Substring not found\n");  // 일치하는 문자열을 찾지 못한 경우 메시지 출력
    }

    return 0;
}
