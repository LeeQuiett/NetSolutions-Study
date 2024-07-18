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