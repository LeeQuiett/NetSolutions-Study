#include <stdio.h>

int main(void) {
	char ch = 0;

	do {
		ch = getchar();
		putchar(ch);
	} while (ch != '\n');

	return 0;
}