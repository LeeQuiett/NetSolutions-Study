#include <stdio.h>

//�迭 ���μ��� '������' �Ű������� �޴´�.
//�����Ϳ��� ����� ���� ������ �����Ƿ� int �Ű������� �� �ʿ��ϴ�.
//���� �Է¹޾ƾ� �� ������ ������ �޶����� �� �Լ� �ڵ�� ������ �ʴ´�.
void initList(int* list, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &list[i]);
	}
}

//��Ұ� int ������ �迭�̶�� ����� ������ ������� ������ �� �ִ�!
void sortList(int* list, int size) {
	int temp = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (list[i] > list[j]) {
				temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
}

void printList(int* list, int size) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", list[i]);
	} putchar('\n');
}

int main(void) {
	//�ڷᱸ���� ���������� �����߱� ������
	//�ٸ� �Լ������� ���� ������ �� ����.

	int list[5] = { 0 };
	initList(list, 5);
	sortList(list, 5);
	printList(list, 5);
	return 0;
}