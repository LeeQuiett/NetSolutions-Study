#include <stdio.h>

//계승을 구하는 기능은 있지만 메시지를 출력하지는 않는다.
int getFactorial(int param) {
	int result = 1;

	//매개변수 밗이 유효하지 않다면 0을 반환함으로써
	//호출자 함수에 오류를 알린다!
	if (param > 10 || param < 1) return 0;

	for (int i = 1; i <= param; i++) {
		result *= i;
	}
	return result;
}


int main(void) {
	int result = 0, input = 0;

	printf("계승을 구할 정수(1~10)을 입력하세요: ");
	scanf_s("%d", &input);

	result = getFactorial(input);
	if (result == 0) {
		puts("ERROR: 1~10사이의 정수를 입력하세요.");
		return 0;
	}
	printf("Result: %d", result);
	return 0;
}