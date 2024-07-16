#include <stdio.h>

//주소를 매개변수로 받을 때는 대상 메모리의 크기를 함께 받는 것이 좋다.
void getName(char* pName, int size) {
	printf("이름을 입력하세요: ");
	//매개변수로 전달받은 주소를 다시 gets_()함수의 인수로 넘긴다.
	gets_s(pName, size);
}

int main(int argc, char* argv[]) {
	char name[32] = { 0 };

	//배열(주소)과 배열의 크기를 함수의 매개변수로 전달한다.
	getName(name, sizeof(name));
	printf("당신의 이름은 %s입니다.\n", name);
	return 0;
}