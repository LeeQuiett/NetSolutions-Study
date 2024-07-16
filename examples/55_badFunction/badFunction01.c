#include <stdio.h>

int* testFunc(void) {
	int data = 10;
	//함수가 반환하면 소멸할 자동변수의 주소를 반환한다.
	return &data;
}

int main(int argc, char* argv[]) {
	int* pResult = NULL;
	pResult = testFunc();

	//포인터가 가리키는 대상 메모리는 유효하지 않은 메모리이다.
	printf("%d\n", *pResult);
	return 0;
}