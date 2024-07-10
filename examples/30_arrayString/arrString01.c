#include <stdio.h>

int main(void) {
	int list[5] = { 30,40,10,50,20 };
	char buffer[6] = { 'H', 'e', 'l', 'l', 'o','\0' };

	char data[8] = { "Hello" };

	char *pBuffer = "Hello";

	puts(buffer);
	puts(data);
	puts(pBuffer);
	return 0;
}