#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int input = 0;
	int computerChoice = 0;

	printf("1: ����, 2: ����, 3: ��\n����� ������? ");
	scanf("%d", &input);

	computerChoice = (rand() % 3) + 1;

	if (input < 0 || input > 3) {
		perror("�߸��� ���� �Է�!!!!");
		return 1;
	}

	if (input == computerChoice) {
		printf("�����ϴ�!");
	}
	else if ((input == 1 && computerChoice == 3) || (input == 2 && computerChoice == 1) || (input == 3 && computerChoice == 2)) {
		printf("����� �̰���ϴ�!");
	}
	else {
		printf("��ǻ�Ͱ� �̰���ϴ�!");
	}

	printf("\n������� ����: %d, ��ǻ���� ����: %d", input, computerChoice);

	return 0;
}