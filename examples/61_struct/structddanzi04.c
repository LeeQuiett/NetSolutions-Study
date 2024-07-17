#include <stdio.h>

typedef struct USERDATA {
	char name[32];
	char phone[32];
	struct USERDATA* pNext;
} USERDATA;

int main(void) {
	USERDATA userList[4] = {
		{"손심바", "110.12", NULL},
		{"비와이", "111.12", NULL},
		{"박재범", "112.12", NULL},
		{"서리크루", "113.12", NULL},
	};

	//연결 리스트의 첫 번째 인스턴스의 주소를 저장할 포인터
	USERDATA* pUser = NULL;

	//pNext 멤버를 배열의 순서상 다음 구조체 인스턴스의 주소로 정의한다.
	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	//연결된 리스트의 첫 번째 인스턴스를 가리키도록 포인터를 정의한다.
	pUser = &userList[0];
	while (pUser != NULL) {
		//포인터가 가리키는 인스턴스의 멤버를 출력한다.
		printf("%s\t%s\n", pUser->name, pUser->phone);
		pUser = pUser->pNext;
	}
	return 0;
}