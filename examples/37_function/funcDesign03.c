#include <stdio.h>

//���� ������ �Է¹޴� �������̽�
int getResult(void) {
	int result = 0;
	printf("����(1~100)�� �Է��ϼ���. : ");
	scanf_s("%d", &result);
	return result;
}

//������ ����ϴ� ���
char getGrade(int score) {
	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';

	return 'F';
}

//���α׷��� ��ü�� �帧
int main(void) {
	int result = 0;

	result = getResult();
	printf("����� ������: %c �Դϴ�.", getGrade(result));

	return 0;
}