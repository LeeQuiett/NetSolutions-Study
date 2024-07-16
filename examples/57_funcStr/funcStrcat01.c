#include <stdio.h>
#include <string.h>

int main(void) {
	char path[128] = { "C:\\Program Files\\" };
	char buffer[128] = { 0 };
	printf("Input path: ");
	gets_s(buffer, 128);

	strcat_s(path, 32, buffer);
	puts(path);
	return 0;
}