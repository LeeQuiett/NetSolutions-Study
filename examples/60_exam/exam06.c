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
