#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* fp = NULL;
	fp = fopen("Test.dat", "rb");

	//파일 입출력 포인터를 파일의 끝으로 이동시킨다.
	fseek(fp, 0, SEEK_END);
	//앞서 파일 입출력 포인터를 맨 끝으로 옮겼으므로 파일 크기를 알 수 있다.
	printf("size of Test.dat : %u\n", ftell(fp));

	fclose(fp);
}