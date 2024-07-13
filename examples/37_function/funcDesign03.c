#include <stdio.h>

//계산된 학점을 입력받는 인터페이스
int getResult(void) {
	int result = 0;
	printf("성적(1~100)을 입력하세요. : ");
	scanf_s("%d", &result);
	return result;
}

//학점을 계산하는 기능
char getGrade(int score) {
	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';

	return 'F';
}

//프로그램의 전체적 흐름
int main(void) {
	int result = 0;

	result = getResult();
	printf("당신의 학점은: %c 입니다.", getGrade(result));

	return 0;
}