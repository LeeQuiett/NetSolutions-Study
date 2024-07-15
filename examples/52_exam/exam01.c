#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void) {
	char* pBuffer = (char*)malloc(16);
	char* pNewBuffer = NULL;

	if (pBuffer == NULL) {
		perror("메모리 할당 실패!");
		return 1;
	}
	scanf_s("%15s", pBuffer, 16);
	puts(pBuffer);

	size_t currentLen = strlen(pBuffer);
	size_t newSize = currentLen + 16;
	
	pNewBuffer = (char*)realloc(pBuffer, newSize);
	if (pNewBuffer == NULL) {
		perror("메모리 재할당 실패!");
		return 1;
	}
	scanf_s("%15s", pNewBuffer + currentLen, 16);
	puts(pNewBuffer);

	free(pNewBuffer);

	return 0;
}