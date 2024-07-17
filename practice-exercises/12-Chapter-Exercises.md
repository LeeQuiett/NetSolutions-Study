### 문자열을 복사하는 함수 만들기

- 답안

```c
#include <stdio.h>

void myStrcpy(char* dst, int size, char* src) {
	for (int i = 0; i < size; i++)
	{
		dst[i] = src[i];
	}
}

int main(int argc, char* argv[]) {
	char bufferSrc[12] = { "TestString" };
	char bufferDst[12] = { 0 };

	myStrcpy(bufferDst, sizeof(bufferDst), bufferSrc);
	puts(bufferDst);
	return 0;
}
```

---

### 매개변수로 검색 대상 문자열이 저장된 메모리의 주소와 그 대상 문자에서 찾고 싶은 문자열이 저장된 메모리의 주소를 받아 검색에 성공하면 대상 메모리에서 찾고자 하는 문자열이 저장된 위치의 인덱스를 반환하는 함수를 작성하세요. 기능적으로는 strstr( ) 함수와 같지만, 반환하는 자료형은 char*가 아니라 대상 메모리에 대한 인덱스를 정수형으로 반환해야 합니다. 만일 찾는 문자열이 없다면 -1을 반환하는 함수로 정의합니다.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findSubstringIndex(const char* str, const char* substr) {
    char* pStr = str;
    char* pSubstr;
    char* pMatch;

    while (pStr != '\0') {
        pSubstr = substr;
        pMatch = pStr;

        while (*pSubstr != '\0' && *pSubstr == *pMatch) {
            pSubstr++;
            pMatch++;
        }
        if (*pSubstr == '\0') return pStr - str;
        
        pStr++;
    }
    return -1;
}

int main() {
    const char* str = "Hello, World!";  // 검색 대상 문자열
    const char* substr = "World";  // 찾고자 하는 문자열

    int index = findSubstringIndex(str, substr);  // 함수 호출
    if (index != -1) {
        printf("Substring found at index: %d\n", index);  // 일치하는 문자열의 인덱스를 출력
    }
    else {
        printf("Substring not found\n");  // 일치하는 문자열을 찾지 못한 경우 메시지 출력
    }

    return 0;
}

```

---

### 매개변수로 char*의 배열이름과 요소의 개수를 인수로 받아 오름차순으로 문자열을 정리하는 SortString( ) 함수를 작성하세요.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void SortString(char** array, int size) {
	char* temp = NULL;

	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strcmp(array[i], array[j]) > 0) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main(void)
{
	char* aList[5] = {
	"정형돈",
	"노홍철",
	"하하",
	"유재석",
	"박명수"
	};
	int i = 0;
	SortString(aList, 5);
	for (i = 0; i < 5; ++i)
		puts(aList[i]);
	return 0;
}
```

---

### int형 5행 4열 배열에서 각 요소의 총합을 계산하여 반환하는 GetTotal( ) 함수를 작성하세요.

- 답안

```c
#include <stdio.h>

int getTotal(int list[5][4]) {
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += list[i][j];
		}
	}

	return sum;
}

int main(void) {
	int list[5][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},
		{17, 18, 19, 20}
	};

	int sum = getTotal(list);
	printf("%d\n", sum);

	return 0;
}
```

---

### 매개변수로 char* 두 개를 받아 각 포인터가 가리키는 대상 문자열이 같은 문자열인지 비교하는 함수를 작성합니다. 만일 같으면 0을 반환하고 그렇지 않으면 1을 반환합니다. 기본적인 기능은 strcmp( ) 함수와 같습니다. 단, 영문 대/소문자를 구별하지 않고 비교합니다. 따라서 'h'와 'H'를 같다고 인식해야 합니다.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int compareStrings(const char* a, const char* b) {
    while (*a != '\0' && *b != '\0') {
        char lowerA = tolower((unsigned char)*a);
        char lowerB = tolower((unsigned char)*b);

        if (lowerA != lowerB) {
            return 1; // 문자열이 다름
        }
        a++;
        b++;
    }

    // 두 문자열이 모두 끝났으면 같음
    return (*a == '\0' && *b == '\0') ? 0 : 1;
}

int main(void) {
    char aData[] = "hello";
    char bData[] = "HELLO";
    int result = compareStrings(aData, bData);
    printf("결과: %d\n", result);

    return 0;
}

```

---

### 난수를 발생시켜서 가위바위보 게임 구현

- 답안

```c
 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	int input = 0;
	int computerChoice = 0;

	printf("1: 가위, 2: 바위, 3: 보\n당신의 선택은? ");
	scanf("%d", &input);

	computerChoice = (rand() % 3) + 1;

	if (input < 0 || input > 3) {
		perror("잘못된 범위 입력!!!!");
		return 1;
	}

	if (input == computerChoice) {
		printf("비겼습니다!");
	}
	else if ((input == 1 && computerChoice == 3) || (input == 2 && computerChoice == 1) || (input == 3 && computerChoice == 2)) {
		printf("당신이 이겼습니다!");
	}
	else {
		printf("컴퓨터가 이겼습니다!");
	}

	printf("\n사용자의 선택: %d, 컴퓨터의 선택: %d", input, computerChoice);

	return 0;
}
```

---

### 오늘을 기준으로 10일 후와 100일 후의 날짜를 계산하여 출력하는 프로그램을 작성

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm pt;

    time_t t = time(NULL);
    localtime_s(&pt, &t); // 현재 시간을 pt 구조체에 저장

    pt.tm_mday += 10; // 10일을 더함
    mktime(&pt); // 날짜를 정상화
    printf("10일 후: %d-%02d-%02d\n", pt.tm_year + 1900, pt.tm_mon + 1, pt.tm_mday);

    t = time(NULL); // 현재 시간을 다시 얻음
    localtime_s(&pt, &t); // pt 구조체를 현재 시간으로 다시 설정

    pt.tm_mday += 100; // 100일을 더함
    mktime(&pt); // 날짜를 정상화
    printf("100일 후: %d-%02d-%02d\n", pt.tm_year + 1900, pt.tm_mon + 1, pt.tm_mday);

    return 0;
}

```
