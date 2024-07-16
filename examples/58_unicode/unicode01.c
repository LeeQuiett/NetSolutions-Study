#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	wchar_t* data = L"String";
	wchar_t data2[32];

	wcscpy(data2, data);
	wprintf(L"%s\n", data2);

	return 0;
}