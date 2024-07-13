#include <stdio.h>

//배열 실인수는 '포인터' 매개변수로 받는다.
//포인터에는 요소의 개수 정보가 없으므로 int 매개변수가 더 필요하다.
//만일 입력받아야 할 정수의 개수가 달라져도 이 함수 코드는 변하지 않는다.
void initList(int* list, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &list[i]);
	}
}

//요소가 int 형식인 배열이라면 요소의 개수와 상관없이 정렬할 수 있다!
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
	//자료구조를 지역변수로 선언했기 때문에
	//다른 함수에서는 직접 접근할 수 없다.

	int list[5] = { 0 };
	initList(list, 5);
	sortList(list, 5);
	printList(list, 5);
	return 0;
}