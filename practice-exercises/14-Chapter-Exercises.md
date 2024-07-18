### 표준입력장치(stdin)에서 문자열을 입력받은 후, 표준출력장치(stdout)로 출력하는 프로그램을 작성하세요. 단, 반드시 fgets( )와 fputs( ) 함수를 사용하세요.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE *fp = stdin;
	char buffer[32] = { 0 };
	fgets(buffer, sizeof(buffer), fp);
	fputs(buffer, stdout);
	return 0;
}
```

---

### 현재 경로에서 'TestFile.txt' 텍스트 파일을 연 후, 사용자가 입력한 문자열을 뒤에 이어서 추가한 후 다시 저장하는 프로그램을 작성하세요.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	fp = fopen("TestFile.txt", "a+");
	char buffer[32] = { 0 };
	fgets(buffer, 32, stdin);
	fputs(buffer, fp);
	fclose(fp);
	return 0;
}
```

---

### 현재 경로에서 'TestFile.txt' 텍스트 파일을 연 후, 원본 파일에서 행 단위로 문자열을 읽어 들여 대상 파일에 복사하는 프로그램을 작성하세요. 단, 대상 파일도 현재 경로에 생성하며, 파일명은 'DstFile.txt'로 합니다.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = NULL;
	char buffer[128] = { 0 };
	fp = fopen("TestFile.txt","r");

	FILE* fpDst = NULL;
	fpDst = fopen("DstFile.txt", "w");
	
	while (fgets(buffer, sizeof(buffer), fp)) {
		fputs(buffer, fpDst);
		memset(buffer, 0, sizeof(buffer));
	}

	_fcloseall();

	return 0;
}
```

---

### main( ) 함수의 인자로 두 바이너리 파일의 경로를 입력받아 바이너리 모드로 열고, 원본 파일의 내용을 읽어들여 대상 파일로 복사하는 프로그램을 작성하세요. 단, 복사의 진행 과정을 백분율로 화면에 출력하고, 한 번에 4KB 단위로 복사합니다. 그리고 대상 파일이 존재 유무에 상관없이 무조건 생성하며, 파일의 크기가 최대 100MB 이상인 경우는 고려하지 않습니다.

- 답안

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void) {
    char buffer[128] = { 0 };
    FILE* fp = NULL;
    long fileSize;
    long fileCount;
    double progress = 0.0;

    fp = fopen("binaryTest.dat", "rb");
    if (fp == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // 파일 포인터를 파일의 끝으로 이동시킴
    fseek(fp, 0, SEEK_END);

    // 파일 크기를 구함
    fileSize = ftell(fp);
    // fread에 사용할 count를 구함
    fileCount = fileSize / sizeof(buffer);

    fseek(fp, 0, SEEK_SET);

    printf("바이너리 파일 크기는 %ld bytes입니다.\n", fileSize);

    FILE* fpDst = NULL;
    fpDst = fopen("binaryTestDst.dat", "wb");
    if (fpDst == NULL) {
        perror("Error opening destination file");
        fclose(fp);
        return 1;
    }

    printf("복사중...\n");

    long totalBinaryRead = 0;
    size_t binaryRead;
    while ((binaryRead = fread(buffer, 1, sizeof(buffer), fp)) > 0) {
        fwrite(buffer, 1, binaryRead, fpDst);
        totalBinaryRead += binaryRead;

        progress = ((double)totalBinaryRead / fileSize) * 100.0;
        printf("\rProgress: %.2f%%", progress);
        Sleep(400); //복사가 너무 빨리끝나서 진행상황 보려고 추가함
    }

    printf("\n파일 복사 완료\n");

    fclose(fp);
    fclose(fpDst);

    return 0;
}
```
