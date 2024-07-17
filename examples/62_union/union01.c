#include <stdio.h>

//IP_ADDR '����ü' ���� �� �� �缱��
//4����Ʈ�� �� ���� �������� �޸� �ؼ��� �� �ֵ��� �����Ѵ�.
typedef union _IP_ADDR {
	int address;			//�ؼ�1
	short awData[2];		//�ؼ�2
	unsigned char addr[4];	//�ؼ�3
} IP_ADDR;

int main(void) {
	IP_ADDR data = { 0 };
	data.address = 0x41424344;

	//0x41424344�� 8��Ʈ�� 0x41, 0x42, 0x43, 0x44 ������ �߶�
	//�����ڷ� ����Ѵ�.
	printf("%c%c%c%c\n", data.addr[0], data.addr[1], data.addr[2], data.addr[3]);
	//16��Ʈ�� �ѷ� �߶� ����Ѵ�.
	printf("%X, %d\n", data.awData[0], data.awData[0]);
	printf("%X, %d\n", data.awData[1], data.awData[1]);
	return 0;
}