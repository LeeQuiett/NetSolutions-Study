#include <stdio.h>

int main(void) {
	int second = 0;
	int h = 0, m = 0, s = 0;

	printf("정수로 초를 입력받아 '시:분:초' 형식으로 출력하겠습니다. : ");
	scanf_s("%d", &second);

	h = second / 3600;
	m = (second-3600) / 60;
	s = second % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", second, h, m, s);

	return 0;
}