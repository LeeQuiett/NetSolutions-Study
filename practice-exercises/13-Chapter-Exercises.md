### 다음 예제의 실행결과와 이유는?

```c
#include <stdio.h>
typedef struct USERDATA
{
	char ch;
	int nAge;
} USERDATA;
typedef struct MYDATA
{
	char ch;
	int nAge;
	double dData;
} MYDATA;
int main(void)
{
	printf("%d\n", sizeof(USERDATA));
	printf("%d\n", sizeof(MYDATA));
	return 0;
}
```

- 답안
    - USERDATA = 8
        - 1 + 4 = 5,  구조체는 8바이트 단위로 관리하기 때문(보통의 기본 설정일 경우)
    - MYDATA = 16
        - 1 + 4 + 8 = 13 이유는 위와 동일

---

### 자기 자신에 대한 포인터를 멤버로 갖는 구조체를 무엇이라 하는지 쓰세요.

- 답안
    - 자기 참조 구조체
