#include <stdio.h>

int setData() {
	int input = 0;

	printf("������ �Է��ϼ���: ");
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
	printf("%d, %d, %d �� ���� ū ���� %d �Դϴ�.", a, b, c, max);
}

int main(void) {
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;
	//�Է�
	for (i = 0; i < 3; ++i) {
		aList[i] = setData();
	}
	//�ִ� ���
	nMax = getMax(aList[0], aList[1], aList[2]);

	//���
	printData(aList[0], aList[1], aList[2], nMax);
	return 0;
}