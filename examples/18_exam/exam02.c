#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int inputArray[5] = { 0 };
	int max = 0;

	//교재 흐름상 반복문을 배우지 않았기 때문에 이렇게 작성함.
	printf("정수 5개를 입력하세요: ");
	
	scanf("%d", &inputArray[0]);
	if (inputArray[0] < 0) {
		inputArray[0] = 0;
	} else if(inputArray[0] > 100) {
			inputArray[0] = 100;
		}

	scanf("%d", &inputArray[1]);
	if (inputArray[1] < 0) {
		inputArray[1] = 0;
	}
	else if (inputArray[1] > 100) {
		inputArray[1] = 100;
	}

	scanf("%d", &inputArray[2]);
	if (inputArray[2] < 0) {
		inputArray[2] = 0;
	}
	else if (inputArray[2] > 100) {
		inputArray[2] = 100;
	}

	scanf("%d", &inputArray[3]);
	if (inputArray[3] < 0) {
		inputArray[3] = 0;
	}
	else if (inputArray[3] > 100) {
		inputArray[3] = 100;
	}

	scanf("%d", &inputArray[4]);
	if (inputArray[4] < 0) {
		inputArray[4] = 0;
	}
	else if (inputArray[4] > 100) {
		inputArray[4] = 100;
	}


	if (inputArray[0] < inputArray[1]) {
		max = inputArray[1];
	}
	else {
		max = inputArray[0];
	}

	if (max > inputArray[2]) {

	}
	else {
		max = inputArray[2];
	}

	if (max > inputArray[3]) {

	}
	else {
		max = inputArray[3];
	}

	if (max > inputArray[4]) {

	}
	else {
		max = inputArray[4];
	}

	printf("MAX: %d", max);

	return 0;
}