#include <stdio.h>

int main(void) {
	int second = 0;
	int h = 0, m = 0, s = 0;

	printf("������ �ʸ� �Է¹޾� '��:��:��' �������� ����ϰڽ��ϴ�. : ");
	scanf_s("%d", &second);

	h = second / 3600;
	m = (second-3600) / 60;
	s = second % 60;

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n", second, h, m, s);

	return 0;
}