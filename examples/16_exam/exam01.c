#include <stdio.h>

int main(void) {
	int height = 0;
	printf("Ű�� �Է��ϼ���: ");
	scanf_s("%d%*c", &height);
	height >= 150 ? "�հ�" : "���հ�";
	printf("\n��� %s\n", (height >= 150 ? "�հ�" : "���հ�"));

	return 0;
}