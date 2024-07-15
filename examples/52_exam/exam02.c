#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input = 0;
	scanf_s("%d", &input, 12);

	char** ppArray = (char**)malloc(sizeof(char*) * input);
	if (ppArray == NULL) {
		perror("메모리 할당 실패!");
		return 1;
	}

	for (int i = 0; i < input; i++)
	{
		*(ppArray+i) = (char*)malloc(sizeof(char) * 12);
		if (*(ppArray+i) == NULL) {
			perror("메모리 할당 실패!");
			return 1;
		}
		scanf_s("%s", *(ppArray + i), 12);
	}

	for (int i = 0; i < input; i++) {
		printf("%s\n", ppArray[i]);
	}

	free(ppArray);

	return 0;
}