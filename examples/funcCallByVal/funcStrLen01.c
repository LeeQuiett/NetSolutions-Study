#include <stdio.h>

//매개변수로 전달된 문자열의 길이를 반환하는함수
int getLength(const char* buffer) {
	int length = 0;
	while (buffer[length] != '\0') {
		length++;
	}
	return length;
}

int main(int argc, char* argv[]) {
	char* pData = "Hello";
	
	printf("%d\n", getLength(pData));
	printf("%d\n", getLength("hi"));
	return 0;
}