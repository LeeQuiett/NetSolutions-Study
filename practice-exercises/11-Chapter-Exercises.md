| 분류 | 특징 |
| --- | --- |
| Stack | 자동변수이고 지역변수인 변수가 사용하는 메모리 영역이며, 임시 메모리의 성격을 가진다. 크기가 작고(기본 설정을 기준으로 최대 1MB 수준) 관리(할당 및 반환)가 자동으로 이루어지는 장점이 있다. |
| Heap | 동적 할당할 수 있는 자유 메모리 영역이며, 개발자 자신 스스로 직접 관리(수동)해야 한다. 32비트 응용프로그램의 경우, 대략 1.xGB 정도를 사용할 수 있다. 따라서 대량의 메모리가 필요하거나 필요한 메모리의 크기를 미리 알 수 없을 때 사용한다. |
| PE image(실행파일) | Text section | C 언어의 소스코드가 번역된 기계어가 저장된 메모리 영역이며, 기본적으로는 읽기전용 메모리이다. 만일 어떤 식으로든 이 영역의 메모리를 변조한다면, 해킹이라 할 수 있다. |
| PE image(실행파일) | Data section | Read only | 상수 형태로 기술하는 문자열(예: "Hello")이 저장된 메모리 영역이며, Text 영역처럼 읽기는 가능하나 쓰기는 허용되지 않는다. |
| PE image(실행파일) | Data section | Read/Write | 정적변수나 전역변수들이 사용하는 메모리 영역이며, 별도로 초기화하지 않아도 0으로 초기화된다. 관리는 자동이라서 힙 영역 메모리처럼 할당 및 해제를 신경 쓸 필요는 없다. |
- PE Header 혹은 PE image로 검색하면 더 자세한 내용을 볼 수 있다.

---

### 중대한 두 가지 오류

이 예제를 작성하여 실행하면 실행결과가 잘 출력됨을 확인할 수 있으나 두 가지 심각한 결함이 있다. 답하라.

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer;
	puts(pszData);
	return 0;
}
```

- 답안
    - pszData의 동적할당한 메모리 해제 안함
    - 사실 pszData에 동적할당한 메모리를 두고 szBuffer의 주소를 덮어쓰니 동적할당 받은 메모리 주소를 잃어버려 메모리 해제가 불가능하다.

---

### 문자열과 상대주소 계산

다음 코드에서 배열 szBuffer의 메모리 구조를 그림으로 표현한 후, 예제의 실행결과를 작성합니다. 특히, 세 번째와 여섯 번째 printf() 함수의 출력 결과에 대해서는 왜 그런 결과가 출력되었는지 이유를 기술합니다.

```c
#include <stdio.h>
#include <string.h>
int main(void)
{
	char szBuffer[32] = { "You are a girl." };
	char* pszData = szBuffer + 4;
	printf("%c\n", szBuffer[0]);
	printf("%c\n", pszData[0]);
	printf("%c\n", pszData[6]);
	printf("%s\n", szBuffer + 4);
	printf("%s\n", pszData);
	printf("%s\n", pszData + 4);
	return 0;
}
```

- 답안
    - 메모리 구조

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Y | o | u |  | a | r | e |  | a |  | g | i | r | l | . | \0 |

출력 결과

```c
Y
a
g
are a girl.
are a girl.
a girl.
```

---

### 매개변수로 char*형 자료를 받아서 문자열의 길이를 계산해 반환하는 함수를 작성하세요. 함수의 이름은 getLength()로 합니다.

- 답안

```c
int getLength(char* array) {
	int counter = 0;
	
	while(*array != '\0') {
		counter++;
		array++;
	}
	return counter;
}
```

---

### 인터넷에서 strrev() 함수의 사용방법에 대해 찾아보고 이 함수와 동일한 기능을 수행할 수 있는 MyStreev() 함수를 작성하세요 .

- 답안

```c
char* myStrrev(char* str) {
	if(!str) {
	return NULL;
	}
	
	char* start = str;
	char* end = str + strlen(str) - 1;
	char temp;
	
	while(end > start) {
		temp = *start;
		*start = *end;
		*end = temp;
		end--;
		start++;
	}
	return str;
}
```

---

### 사용자로부터 입력받은 첫 번째 문자열을 동적 할당된 메모리에 저장한 후 화면에 출력하고, 두번째 입력받은 문자열을 첫 번째로 동적 할당된 메모리에 덧붙여 출력하는 프로그램을 작성합니다. 이때, 메모리가 부족해서 문제가 발생하지 않도록 메모리의 크기를 조정합니다. 기존에 할당받은 메모리의 크기를 늘려도 좋고 다시 할당받아도 좋습니다. 혹은 두 경우를 모두 구현하는 것도 좋습니다.

- 답안

```c
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

int main(void) {
	char* pBuffer = (char*)malloc(16);
	char* pNewBuffer = NULL;

	if (pBuffer == NULL) {
		perror("메모리 할당 실패!");
		return 1;
	}
	scanf_s("%15s", pBuffer, 16);
	puts(pBuffer);

	size_t currentLen = strlen(pBuffer);
	size_t newSize = currentLen + 16;
	
	pNewBuffer = (char*)realloc(pBuffer, newSize);
	if (pNewBuffer == NULL) {
		perror("메모리 재할당 실패!");
		return 1;
	}
	scanf_s("%15s", pNewBuffer + currentLen, 16);
	puts(pNewBuffer);

	free(pNewBuffer);

	return 0;
}
```

---

### 정수를 입력받고, 그 개수만큼 char*를 여러 개 저장할 수 있는 메모리를 동적 할당합니다. 그리고 입력할 문자열의 최대 길이를 입력받고, 최대 길이의 문자열을 저장할 수 있는 크기의 메모리를 동적 할당하여 입력받은 문자열을 저장한 후 출력하는 프로그램을 작성합니다. 메모리의 구조는 아래와 같습니다

![Untitled](https://frost-nerine-bfa.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2Fea8dd16e-ce24-4633-b1ef-2f39a7414cd8%2F46fc3a13-28dc-42c6-9720-fbf9f2f99c23%2FUntitled.png?table=block&id=5d4705de-eb07-4736-855a-cff7d24b29e4&spaceId=ea8dd16e-ce24-4633-b1ef-2f39a7414cd8&width=1420&userId=&cache=v2)

사용자는 3을 입력했고 총 세 번의 문자열을 입력합니다. 그리고 가장 긴 문자열의 길이는 12입니다.

- 답안

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input = 0;
	scanf_s("%d", &input, 12);

	char** ppArray = (char**)malloc(sizeof(char*) * input);
	if (ppArray == NULL) {
		perror("메모리 할당 실패!");
		return 1;
	}

	for (int i = 0; i < input; i++)
	{
		*(ppArray+i) = (char*)malloc(sizeof(char) * 12);
		if (*(ppArray+i) == NULL) {
			perror("메모리 할당 실패!");
			return 1;
		}
		scanf_s("%s", *(ppArray + i), 12);
	}

	for (int i = 0; i < input; i++) {
		printf("%s\n", ppArray[i]);
	}

	free(ppArray);

	return 0;
}
```
