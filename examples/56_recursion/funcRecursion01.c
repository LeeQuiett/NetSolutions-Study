#include <stdio.h>

//계승을 계산하고 결과를 반환하는 함수
int getFactorial(int param) {
	int result = 0;
	//재귀호출을 끝내기 위한 조건식! 반복문의 조건식과 같다.
	if (param == 1) return 1;

	result = param * getFactorial(param-1);
	return result;
}

int main(void) {
	printf("5! == %d", getFactorial(5));
	return 0;
}