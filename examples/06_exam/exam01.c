#include <stdio.h>

int main(void) {
	int age = 0;
	char name[20] = { 0 };

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	while (getchar() != '\n');

	printf("�̸��� �Է��ϼ���: ");
	gets_s(name, sizeof(name));

	printf("\n����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.", age, name);


}