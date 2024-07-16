#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void SortString(char** array, int size) {
	char* temp = NULL;

	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(array[i], array[j]) > 0) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(void)
{
	char* aList[5] = {
	"Á¤Çüµ·",
	"³ëÈ«Ã¶",
	"ÇÏÇÏ",
	"À¯Àç¼®",
	"¹Ú¸í¼ö"
	};
	int i = 0;
	SortString(aList, 5);
	for (i = 0; i < 5; ++i)
		puts(aList[i]);
	return 0;
}