#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//ȭ�鿡 �޴��� ����ϴ� �Լ��� ���� �� ����
int printMenu(void) {
	int input = 0;

	//�޴��� ����ϱ� ���� ȭ���� �����. (Clear screen)
	system("cls");
	//�޴��� ����ϰ� ����� �Է��� �޴´�.
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &input);

	//����ڰ� ������ �޴� ���� ��ȯ�Ѵ�.
	return input;
}

int main(void) {
	int menu = 0;

	//�޴� �̺�Ʈ ����
	//����ڰ� �Է��� ���� ���� ������ ����� �ݺ��� �����Ѵ�.
	//0�� �Է��ϸ� �ݺ����� ������.
	while ((menu = printMenu()) != 0) {
		switch (menu) {
		case 1: //New
			puts("�� �׸��� �߰��մϴ�.");
			break;
		
		case 2: //Search
			puts("���� �׸񿡼� �˻��մϴ�.");
			break;

		case 3: //Print
			puts("��ü ������ ����մϴ�.");
			break;

		case 4: //Remove
			puts("���� �׸��� �����մϴ�.");
			break;

		default: //???
			puts("�� �� ���� ����Դϴ�.");
		}

		_getch();
	}

	puts("Bye~!");

	return 0;
}