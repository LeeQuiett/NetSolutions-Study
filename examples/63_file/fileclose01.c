#include <stdio.h>

void main() {
	FILE* fp = NULL;
	int close = 0;
	fopen("Test1.txt", "w");
	fopen("Test2.txt", "w");
	fopen("Test3.txt", "w");

	close = _fcloseall();
	printf("%d\n", close);
}