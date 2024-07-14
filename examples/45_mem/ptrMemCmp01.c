#include <stdio.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	//두 메모리에 저장된 값이 같은 경우
	printf("%d\n", memcmp(szBuffer, pszData, sizeof(szBuffer)));

	//왼쪽("teststring")이 더 큰 경우
	printf("%d\n", memcmp("testString", pszData, sizeof(szBuffer)));

	//오른쪽(pszData)이 더 큰 경우
	printf("%d\n", memcmp("DataString", pszData, sizeof(szBuffer)));
	return 0;
}