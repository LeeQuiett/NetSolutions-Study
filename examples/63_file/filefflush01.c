#include <stdio.h>

void main() {
	//표준입력장치 파일(stdin)을 가리키는 포인터 변수 선언 및 정의
	FILE* fp = stdin;
	printf("Input string: ");

	//사용자로부터 '문자열'을 입력받은 후 첫 글자를 읽어와 출력한다.
	printf("getchar() - %c\n", getchar());

	//버퍼에 남아있는 문자의 개수와 내용에 대한 정보를 출력한다.
	printf("[%d] %s", fp->_cnt, fp->_base); //컴파일러에서 접근 허용 안함.
}