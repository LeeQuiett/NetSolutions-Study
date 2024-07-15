#include <stdio.h>

//매개변수가 int *인 함수의 선언 및 정의
int add(int* a, int* b) {
	return *a + *b;
}

int main(int argc, char* argv[]) {
	int x = 3, y = 4;
	add(&x, &y);
	printf("X: %d, Y: %d\n", x, y);
	return 0;
}