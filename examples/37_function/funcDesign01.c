#include <stdio.h>

int getFactorial(int param) {
	int result = 1, i = 0;
	if (param < 1 || param > 10) {
		//매개변수로 전달 받은 값이 유효하지 않다는 메시지를 출력한다.
		//'메시지 출력'은 UI에 해당하므로 함수 내에서
		//처리하는 것은 바람직하지 않다.
		puts("ERROR: 1~10사이의 정수를 입력하세요.");
		return 0;
	}

	//계승을 계산하고 반환한다.
	for (i = 1; i <= param; i++)
	{
		result *= i;
	}
	return result;
}

int main(void) {
	printf("MAX: %d\n", getFactorial(1));
	printf("MAX: %d\n", getFactorial(5));
	printf("MAX: %d\n", getFactorial(11));
	printf("MAX: %d\n", getFactorial(10));

	return 0;
}