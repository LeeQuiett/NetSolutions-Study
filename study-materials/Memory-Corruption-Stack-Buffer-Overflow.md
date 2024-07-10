# stack buffer overflow

### 스택 버퍼 오버플로우(Stack Buffer Overflow)

스택의 버퍼에서 발생하는 오버플로우, [모리스 웜](https://ko.wikipedia.org/wiki/%EB%AA%A8%EB%A6%AC%EC%8A%A4_%EC%9B%9C)(세계 최초의 웜)도 스택 버퍼 오버플로우 공격을 통해 전파되었다.

![https://www.cvedetails.com/vulnerabilities-by-types.php
스택 버퍼 오버플로우를 포함한 오버플로우 취약점은 CVE에 등록된 취약점중 많은 부분을 차지한다.](https://frost-nerine-bfa.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2Fea8dd16e-ce24-4633-b1ef-2f39a7414cd8%2Fe638a65f-2fa0-40d3-80cc-6c3add7938a0%2FVulnerabilities_by_type.png?table=block&id=2abd3d30-e6c4-4d61-b9ce-a7c1d4c6da96&spaceId=ea8dd16e-ce24-4633-b1ef-2f39a7414cd8&width=2000&userId=&cache=v2)

https://www.cvedetails.com/vulnerabilities-by-types.php
스택 버퍼 오버플로우를 포함한 오버플로우 취약점은 CVE에 등록된 취약점중 많은 부분을 차지한다.

<aside>
💡 스택 오버플로우와 스택 버퍼 오버플로우의 차이점

</aside>

- **스택 오버플로우**는 스택 영역이 너무 많이 확장돼서 발생하는 버그.
- **스택 버퍼 오버플로우**는 스택에 위치한 버퍼에 버퍼의 크기보다 많은 데이터가 입력되어 발생하는 버그.

---

### 버퍼 오버플로우(Buffer Overflow)

버퍼의 크기보다 많은 데이터가 입력되면 오버플로우가 발생한다.

일반적으로 버퍼는 메모리상에 연속해서 할당되어 있으므로, 오버플로우로 인해 뒤에 위치한 버퍼들의 값이 조작될 위험이 있다.

| 버퍼 A(0x00) | 버퍼 A(0x01) | 버퍼 A(0x02) | 버퍼 B(0x03) | 버퍼 B(0x04) | 버퍼 B(0x05) |
| --- | --- | --- | --- | --- | --- |
| A | A | A | A | A | A |

---

### 중요 데이터 변조

버퍼 오버플로우가 발생하는 버퍼 뒤에 중요한 데이터가 있다면, 해당 데이터가 변조됨으로써 문제가 발생할 수 있다.

- 오버플로우를 이용한 변조 예제

```c
#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[10];
    strcpy(buffer, input);
    printf("Buffer content: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    int secret = 0;

    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    printf("Initial secret value: %d\n", secret);
    vulnerable_function(argv[1]);
    printf("Final secret value: %d\n", secret);

    if (secret != 0) {
        printf("Buffer overflow detected! Secret value has changed!\n");
    }

    return 0;
}

```

- 코드 컴파일, 실행

```bash
gcc -o buffer_overflow buffer_overflow.c
./buffer_overflow AAAAAAAAAAAAAAAAAAAAAAAAAAAAA
```

- 예상 출력

```bash
$ gcc -o buffer_overflow buffer_overflow.c
$ ./buffer_overflow AAAAAAAAAAAAAAAAAAAAA
Initial secret value: 0
Buffer content: AAAAAAAAAAAAAAAAAAAAA
Final secret value: 1094795585
Buffer overflow detected! Secret value has changed!

/* 버퍼에는 'AAAAAAAAAA'가 저장되고 버퍼를 넘어선 데이터가 secret 변수를 덮어쓰면서
값이 변경된다. 'AAAAAAAA'의 ASCII 값이 0x41414141로 해석되어 정수 1094795585 로 출력될 것이다.
```

- 실제 출력😢 버퍼 오버플로우에 실패했다.

![Untitled](https://frost-nerine-bfa.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2Fea8dd16e-ce24-4633-b1ef-2f39a7414cd8%2F5e1edf2b-f663-4622-aa41-36323168cd85%2FUntitled.png?table=block&id=a8108300-52b2-4d86-a63f-143c9cb36db4&spaceId=ea8dd16e-ce24-4633-b1ef-2f39a7414cd8&width=1420&userId=&cache=v2)

아마 컴파일러가 스택 보호를 활성화하여 버퍼 오버플로우를 막고있고, ASLR (주소 공간 배치 무작위화) 가 활성화 되어 버퍼 오버플로우가 실패한 것 같다.

ASLR 비활성화는 리눅스에서는 쉬운데 윈도우에서는 레지스트리편집하고 재부팅도 해야하고~ 복잡하다.

```bash
// 스택 보호 비활성화
gcc -fno-stack-protector -z execstack -o buffer_overflow buffer_overflow.c

// ASLR 비활성화(Linux 환경)
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

### 리눅스에서 다시 시도😢

![Untitled](https://frost-nerine-bfa.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2Fea8dd16e-ce24-4633-b1ef-2f39a7414cd8%2F53416792-ca69-42e3-996a-2bf7b7327fc6%2FUntitled.png?table=block&id=c5df3686-3d9d-49e1-8f26-c58da1e606d8&spaceId=ea8dd16e-ce24-4633-b1ef-2f39a7414cd8&width=1420&userId=&cache=v2)

- 리눅스에서도 따로 설정해주지 않으면 세그멘테이션 오류 발생

![Untitled](https://frost-nerine-bfa.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2Fea8dd16e-ce24-4633-b1ef-2f39a7414cd8%2F9a9e6926-10d2-40a3-80b4-9fd383681bce%2FUntitled.png?table=block&id=84ce7402-769a-4901-a6a6-05f92cae1f57&spaceId=ea8dd16e-ce24-4633-b1ef-2f39a7414cd8&width=1420&userId=&cache=v2)

- 스택 보호와 ASLR 비활성화

```bash
// 스택 보호 비활성화
gcc -fno-stack-protector -z execstack -o buffer_overflow buffer_overflow.c

// ASLR 비활성화(Linux 환경)
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
```

- 그래도 세그멘테이션 오류 발생😢

```bash
gcc -O0 -g -Wall -o buffer_overflow buffer_overflow.c
gcc -fno-stack-protector -z execstack -o buffer_overflow buffer_overflow.c
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
./buffer_overflow AAAAAAAAAAAAAAAAAAAAA
```

![Untitled](https://frost-nerine-bfa.notion.site/image/https%3A%2F%2Fprod-files-secure.s3.us-west-2.amazonaws.com%2Fea8dd16e-ce24-4633-b1ef-2f39a7414cd8%2F1b82b2e7-282d-4c6c-a727-be1148cce2ea%2FUntitled.png?table=block&id=17794d99-c319-4c53-8642-134e76b28368&spaceId=ea8dd16e-ce24-4633-b1ef-2f39a7414cd8&width=2000&userId=&cache=v2)

## 버퍼 오버플로우 내기 실패..😢오늘은 일단 여기까지만 하고 나중에 다른 방법을 찾아보자..

> 참고문헌
> 
> - 티오리-DreamHack https://learn.dreamhack.io/60#5
