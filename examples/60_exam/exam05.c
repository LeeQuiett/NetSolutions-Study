#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int input = 0;
	int computerChoice = 0;

	printf("1: 가위, 2: 바위, 3: 보\n당신의 선택은? ");
	scanf("%d", &input);

	computerChoice = (rand() % 3) + 1;

	if (input < 0 || input > 3) {
		perror("잘못된 범위 입력!!!!");
		return 1;
	}

	if (input == computerChoice) {
		printf("비겼습니다!");
	}
	else if ((input == 1 && computerChoice == 3) || (input == 2 && computerChoice == 1) || (input == 3 && computerChoice == 2)) {
		printf("당신이 이겼습니다!");
	}
	else {
		printf("컴퓨터가 이겼습니다!");
	}

	printf("\n사용자의 선택: %d, 컴퓨터의 선택: %d", input, computerChoice);

	return 0;
}