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

    // ���� �����͸� ������ ������ �̵���Ŵ
    fseek(fp, 0, SEEK_END);

    // ���� ũ�⸦ ����
    fileSize = ftell(fp);
    // fread�� ����� count�� ����
    fileCount = fileSize / sizeof(buffer);

    fseek(fp, 0, SEEK_SET);

    printf("���̳ʸ� ���� ũ��� %ld bytes�Դϴ�.\n", fileSize);

    FILE* fpDst = NULL;
    fpDst = fopen("binaryTestDst.dat", "wb");
    if (fpDst == NULL) {
        perror("Error opening destination file");
        fclose(fp);
        return 1;
    }

    printf("������...\n");

    long totalBinaryRead = 0;
    size_t binaryRead;
    while ((binaryRead = fread(buffer, 1, sizeof(buffer), fp)) > 0) {
        fwrite(buffer, 1, binaryRead, fpDst);
        totalBinaryRead += binaryRead;

        progress = ((double)totalBinaryRead / fileSize) * 100.0;
        printf("\rProgress: %.2f%%", progress);
        Sleep(400); //���簡 �ʹ� ���������� �����Ȳ ������ �߰���
    }

    printf("\n���� ���� �Ϸ�\n");

    fclose(fp);
    fclose(fpDst);

    return 0;
}