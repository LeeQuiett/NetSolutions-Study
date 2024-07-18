#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* fp = NULL;
	char buffer[128] = { 0 };
	fp = fopen("TestFile.txt","r");

	FILE* fpDst = NULL;
	fpDst = fopen("DstFile.txt", "w");
	
	while (fgets(buffer, sizeof(buffer), fp)) {
		fputs(buffer, fpDst);
		memset(buffer, 0, sizeof(buffer));
	}

	_fcloseall();

	return 0;
}