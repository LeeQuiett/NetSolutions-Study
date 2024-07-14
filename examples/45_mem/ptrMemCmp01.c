#include <stdio.h>
#include <string.h>

int main(void) {
    char szBuffer[12] = { "TestString" };
    char* pszData = "TestString";
    size_t length = strlen(pszData);  // 문자열의 실제 길이를 구합니다.

    // 두 메모리에 저장된 값이 같은 경우
    printf("%d\n", memcmp(szBuffer, pszData, length));

    // 왼쪽("teststring")이 더 큰 경우
    printf("%d\n", memcmp("testString", pszData, length));

    // 오른쪽(pszData)이 더 큰 경우
    printf("%d\n", memcmp("DataString", pszData, length));

    return 0;
}