#include <stdio.h>

void myStrcpy(char* dst, int size, char* src) {
	for (int i = 0; i < size; i++)
	{
		dst[i] = src[i];
	}
}

int main(int argc, char* argv[]) {
	char bufferSrc[12] = { "TestString" };
	char bufferDst[12] = { 0 };

	myStrcpy(bufferDst, sizeof(bufferDst), bufferSrc);
	puts(bufferDst);
	return 0;
}