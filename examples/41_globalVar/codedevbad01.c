#include <stdio.h>

//�� ���α׷� ��ü ��ɰ� ���õ� �ֿ� �ڷᱸ���� ���������� ���� �� ����
int g_aList[5] = { 0 };

//����ڷκ��� ���� �Է¹޾� �������� �迭�� �ʱ�ȭ�Ѵ�.
void initList(void) {
	for (int i = 0; i < 5; i++)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &g_aList[i]);
	}
}

//�������� �迭�� ����� ���� �����ϴ� ���
//�ٸ� int[5] �迭�� ���������� ���Ѵ�!

void sortList(void) {
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (g_aList[i] > g_aList[j]) {
				temp = g_aList[i];
				g_aList[i] = g_aList[j];
				g_aList[j] = temp;
			}
		}
	}
}

//�������� �迭�� ��� ���� ���
void printList(void) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", g_aList[i]);
	} putchar('\n');
}

int main(void) {
	initList();
	sortList();
	printList();
	return 0;
}