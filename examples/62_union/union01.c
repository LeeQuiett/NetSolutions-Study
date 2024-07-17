#include <stdio.h>

//IP_ADDR '공용체' 선언 및 형 재선언
//4바이트를 세 가지 형식으로 달리 해석할 수 있도록 선언한다.
typedef union _IP_ADDR {
	int address;			//해석1
	short awData[2];		//해석2
	unsigned char addr[4];	//해석3
} IP_ADDR;

int main(void) {
	IP_ADDR data = { 0 };
	data.address = 0x41424344;

	//0x41424344를 8비트씩 0x41, 0x42, 0x43, 0x44 넷으로 잘라
	//영문자로 출력한다.
	printf("%c%c%c%c\n", data.addr[0], data.addr[1], data.addr[2], data.addr[3]);
	//16비트씩 둘로 잘라 출력한다.
	printf("%X, %d\n", data.awData[0], data.awData[0]);
	printf("%X, %d\n", data.awData[1], data.awData[1]);
	return 0;
}