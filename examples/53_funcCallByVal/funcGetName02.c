#include <stdio.h>
#include <stdlib.h>

//주소를 반환하는 사용자 정의 함수 선언 및 정의
char* getName(void) {
	char* pName = NULL;
	
	//메모리를 동적 할당한다.
	pName = (char*)calloc(32, sizeof(char));
	printf("이름을 입력하세요: ");

	//동적 할당한 메모리에 사용자가 입력한 문자열을 저장한다.
	gets_s(pName, sizeof(char)*32);
	//동적 할당한 메모리의 주소를 호출자 함수에 반환한다.
	return pName;
}

int main(int argc, char* argv) {
	char* pName = NULL;

	pName = getName();
	printf("당신의 이름은 %s입니다.\n", pName);

	//호출자 함수 메모리를 해제해야 한다!
	free(pName);
	return 0;
}