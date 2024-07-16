#include <stdio.h>

void myStrcpy(char* dst, int size, char* src) {
	int length = 0;
	while (src[length] != '\0') {
		dst[length] = src[length];
		length++;
	}
}

int main(int argc, char* argv[]) {
	char bufferSrc[12] = { "TestString" };
	char bufferDst[12] = { 0 };

	myStrcpy(bufferDst, sizeof(bufferDst), bufferSrc);
	puts(bufferDst);
	return 0;
}