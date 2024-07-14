#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//선언한 배열 요소의 크기를 기술하지 않았지만 초깃값을 기준으로
	//자동으로 크기가 결정 된다(NULL 문자 저장될 크기 포함).
	char szBuffer[] = { "Hello" }; //지역변수인 szBuffer 배열이 사용하는 스택 메모리의 초깃값이 됨

	//"Hello" 문자열이 저장된 메모리의 주소로 초기화되는 포인터 변수
	char* pszBuffer = "Hello"; //데이터 영역 중 읽기전용 영역 어딘가에 "Hello"라는 문자열이 저장된 것

	//동적 할당한 메모리의 주소가 저장될 포인터 선언 및 정의
	char* pszData = NULL;
	//메모리를 동적으로 할당하고 "Hello"문자열로 초기화
	pszData = (char*)malloc(sizeof(int) * 6);
	pszData[0] = 'H';
	pszData[1] = 'e';
	pszData[2] = 'l';
	pszData[3] = 'l';
	pszData[4] = 'o';
	pszData[5] = '\0'; //문자열의 끝을 의미하는 NULL 문자

	puts(szBuffer);
	puts(pszBuffer);
	puts(pszData);

	//free(pszBuffer);
	free(pszData);

	return 0;
}