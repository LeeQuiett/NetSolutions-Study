#include <stdio.h>

int main(void) {
	char buffer[32] = { 0 };
	int i = 0;
	gets(buffer);

	while (buffer[i] != '\0' && buffer[i] != '\n') {
		i++;
	}

	printf("������ ������ %d�� �Դϴ�.", i);

	return 0;
}