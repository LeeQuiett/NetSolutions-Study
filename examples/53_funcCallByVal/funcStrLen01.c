#include <stdio.h>

//�Ű������� ���޵� ���ڿ��� ���̸� ��ȯ�ϴ��Լ�
int getLength(const char* buffer) {
	int length = 0;
	while (buffer[length] != '\0') {
		length++;
	}
	return length;
}

int main(int argc, char* argv[]) {
	char* pData = "Hello";
	
	printf("%d\n", getLength(pData));
	printf("%d\n", getLength("hi"));
	return 0;
}