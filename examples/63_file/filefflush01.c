#include <stdio.h>

void main() {
	//ǥ���Է���ġ ����(stdin)�� ����Ű�� ������ ���� ���� �� ����
	FILE* fp = stdin;
	printf("Input string: ");

	//����ڷκ��� '���ڿ�'�� �Է¹��� �� ù ���ڸ� �о�� ����Ѵ�.
	printf("getchar() - %c\n", getchar());

	//���ۿ� �����ִ� ������ ������ ���뿡 ���� ������ ����Ѵ�.
	printf("[%d] %s", fp->_cnt, fp->_base); //�����Ϸ����� ���� ��� ����.
}