#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm pt;

    time_t t = time(NULL);
    localtime_s(&pt, &t); // ���� �ð��� pt ����ü�� ����

    pt.tm_mday += 10; // 10���� ����
    mktime(&pt); // ��¥�� ����ȭ
    printf("10�� ��: %d-%02d-%02d\n", pt.tm_year + 1900, pt.tm_mon + 1, pt.tm_mday);

    t = time(NULL); // ���� �ð��� �ٽ� ����
    localtime_s(&pt, &t); // pt ����ü�� ���� �ð����� �ٽ� ����

    pt.tm_mday += 100; // 100���� ����
    mktime(&pt); // ��¥�� ����ȭ
    printf("100�� ��: %d-%02d-%02d\n", pt.tm_year + 1900, pt.tm_mon + 1, pt.tm_mday);

    return 0;
}
