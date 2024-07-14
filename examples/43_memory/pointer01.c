#include <stdio.h>

int main(void) {
	int data = 10;
	printf("%s\n", "data");

	//변수 data에 들어 있는 값을 출력
	printf("%d\n", data);
	//변수 data의 메모리 주소를 출력
	printf("%p\n", &data);
	return 0;
}