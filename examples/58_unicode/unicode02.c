#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	//�����ڵ� ���ڿ� ����� �ʱ�ȭ
	wchar_t* data = L"String";

	//MBCS ���ڿ��� ���� �� �ִ� �迭
	char mbcsData[32];
	size_t converted = 0;

	//��ȯ�� ���ڿ��� ���̸� �˾Ƴ���.
	converted = wcstombs(NULL, data, 32);
	printf("%d\n", converted);

	//�����ڵ� ���ڿ��� MBCS ���ڿ��� ������ data�� �����Ѵ�.
	wcstombs(mbcsData, data, 32);

	printf("%s (%d)\n", mbcsData, converted);
	return 0;
}