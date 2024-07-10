#include <stdio.h>

int main(void) {
	char buffer[32] = { 0 };
	int i = 0;
	gets(buffer);

	while (buffer[i] != '\0' && buffer[i] != '\n') {
		i++;
	}

	printf("문자의 개수는 %d자 입니다.", i);

	return 0;
}