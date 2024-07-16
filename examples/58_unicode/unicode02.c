#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	//유니코드 문자열 상수로 초기화
	wchar_t* data = L"String";

	//MBCS 문자열을 담을 수 있는 배열
	char mbcsData[32];
	size_t converted = 0;

	//변환된 문자열의 길이를 알아낸다.
	converted = wcstombs(NULL, data, 32);
	printf("%d\n", converted);

	//유니코드 문자열을 MBCS 문자열로 변경해 data에 저장한다.
	wcstombs(mbcsData, data, 32);

	printf("%s (%d)\n", mbcsData, converted);
	return 0;
}