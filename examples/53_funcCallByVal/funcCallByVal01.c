#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int main(int argc, char* argv[]) {
	printf("%d\n", add(3, 4));
	return 0;
}