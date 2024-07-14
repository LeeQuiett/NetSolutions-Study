#include <stdio.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "TestString" };
	char* pszData = "TestString";

	//다음 코드들은 두 문자열이 같은지 비교하는 것이 아니라
	//문자열이 저장된 메모리의 위치가 같은지 비교하는 것이다.
	/*printf("%d\n", szBuffer == pszData);
	printf("%d\n", "TestString" == pszData);
	printf("%d\n", "DataString" == "TestString");*/

	//다음 코드들은 주소와 상관없이 대상 메모리에 저장된
	//문자열이 같은지 비교한다.
	//만일 기리가 다르면 무조건 같은 문자열이 아니다.
	printf("%d\n", strcmp(szBuffer, pszData));
	printf("%d\n", strcmp("TestString", pszData));
	printf("%d\n", strcmp("Test", pszData));

	return 0;
}