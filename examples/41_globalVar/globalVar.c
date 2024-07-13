#include <stdio.h>

int g_Counter = 0;

void initCouter(int data) {
	g_Counter = data;
}

void increaseCounter() {
	g_Counter++;
}

int main(void) {
	initCouter(10);
	printf("%d\n", g_Counter);
	increaseCounter();
	printf("%d\n", g_Counter);
	increaseCounter();
	printf("%d\n", g_Counter);

	return 0;
}