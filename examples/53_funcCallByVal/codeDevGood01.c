#include <stdio.h>

//�迭 ���μ��� '������' �Ű������� �޴´�.
//�����Ϳ��� ����� ���� ������ �����Ƿ� int �Ű������� �� �ʿ��ϴ�.
//���� �Է¹޾ƾ� �� ������ ������ �޶����� �� �Լ� �ڵ�� ������ �ʴ´�!
void initLIst(int* pList, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &pList[i]);
	}
}

//��Ұ� int ������ �迭�̶�� ����� ������ ������� ������ �� �ִ�!
void sortList(int* pList, int size) {
	int temp = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (pList[i] > pList[j]) {
			temp = pList[i];
			pList[i] = pList[j];
			pList[j] = temp;
			}
		}
	}
}

void printList(int* pList, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", pList[i]);
	} putchar('\n');
}

int main(void) {
	//�ڷᱸ���� ���������� �����߱� ������
	//�ٸ� �Լ������� ���� ������ �� ����.
	int aList[5] = { 0 };

	initLIst(aList, 5);
	sortList(aList, 5);
	printList(aList, 5);
	return 0;


}