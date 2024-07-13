#include <stdio.h>

int setData() {
	int input = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d%*c", &input);

	return input;
}

int getMax(int inputA, int inputB, int inputC) {
	int max = inputA; 

	if (inputB > max) {
		max = inputB; 
	}
	if (inputC > max) {
		max = inputC; 
	}

	return max;
}

void printData(int a, int b, int c, int max) {
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.", a, b, c, max);
}

int main(void) {
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	//입력
	for (i = 0; i < 3; ++i) {
		aList[i] = setData();
	}
	//최댓값 계산
	nMax = getMax(aList[0], aList[1], aList[2]);

	//출력
	printData(aList[0], aList[1], aList[2], nMax);
	return 0;
}