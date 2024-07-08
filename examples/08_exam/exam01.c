#include <stdio.h>

int main(void) {
	char szTest[32] = { 0 };
	gets(szTest);

	printf("%c", szTest[1]);

	return 0;
}