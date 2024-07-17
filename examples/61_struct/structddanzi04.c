#include <stdio.h>

typedef struct USERDATA {
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
} USERDATA;

int main(void) {
	USERDATA userList[4] = {
		{"�սɹ�", "110.12", NULL},
		{"�����", "111.12", NULL},
		{"�����", "112.12", NULL},
		{"����ũ��", "113.12", NULL},
	};

	//���� ����Ʈ�� ù ��° �ν��Ͻ��� �ּҸ� ������ ������
	USERDATA* pUser = NULL;

	//pNext ����� �迭�� ������ ���� ����ü �ν��Ͻ��� �ּҷ� �����Ѵ�.
	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	//����� ����Ʈ�� ù ��° �ν��Ͻ��� ����Ű���� �����͸� �����Ѵ�.
	pUser = &userList[0];
	while (pUser != NULL) {
		//�����Ͱ� ����Ű�� �ν��Ͻ��� ����� ����Ѵ�.
		printf("%s\t%s\n", pUser->name, pUser->phone);
		pUser = pUser->pNext;
	}
	return 0;
}