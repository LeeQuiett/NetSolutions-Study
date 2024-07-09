#include <stdio.h>

int main(void) {
	int height = 0;
	printf("키를 입력하세요: ");
	scanf_s("%d%*c", &height);
	height >= 150 ? "합격" : "불합격";
	printf("\n결과 %s\n", (height >= 150 ? "합격" : "불합격"));

	return 0;
}