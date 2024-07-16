#include <stdio.h>

//매개변수를 주소로 받는다.
void swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char argv[]) {
	int x = 10, y = 20;

	//호출자 함수에 선언된 지역변수의 주소를 전달한다.
	//따라서 함수가 반환한 후 x와 y의 값은 서로 교환된다.
	swap(&x, &y);
	printf("X: %d, Y: %d", x, y);
	return 0;
}