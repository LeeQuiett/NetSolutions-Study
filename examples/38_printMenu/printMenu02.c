#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//나이를 매개변수로 받고 요금을 반환하는 기능을 제공
int getFee(int age) {
	int fee = 1000;
	if (age < 20) fee /= 2;

	return fee;
}

int setAge(void) {
	int age = 0;
	printf("나이를 입력해 주세요: ");
	scanf_s("%d", &age);
	if (age < 0 || age > 100) return 0;

	return age;
}

int printMenu() {
	int inputMenu = 0;
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &inputMenu);
	return inputMenu;
}

int main(void) {
	int menu = 0, age = 0;

	while ((menu = printMenu()) != 0) {
		if (menu == 1) {
			age = setAge();
			printf("당신의 요금은: %d원 입니다.", getFee(age));
			_getch();
		}
	}

	puts("Bye~!");

	return 0;
}