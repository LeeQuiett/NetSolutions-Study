#include <stdio.h>

int main(int argc, char* argv[]) {
	//전체 경우에 대한 과금률 결과를 담은 배열의 선언 및 정의
	double rate[10] = {
		0.0, 0.1, 0.25,	//1~3세 0%, 10%, 25%
		0.5, 0.5,		//4~5세 50%
		0.6, 0.65,		//6~7세 60%, 65%
		0.8, 0.82, 0.97	//8~10세 80%, 82%, 97%
	};

	int age = 0, i = 0, free = 1000;

	//요금표를 출력한다.
	printf("요금표\n");
	for (i = 1; i <= 10; i++)
	{
		printf("%d세 요금: \t%d원\n", i, (int)(free * rate[i - 1]));
	} putchar('\n');

	//나이를 입력받고 배열 인덱스 범위 내부로 값을 강제 조정한다.
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	if (age < 1) age = 1;
	else if (age > 10) age = 10;

	//나이에 맞는 배열요소를 선택하고 별다를 제어문 없이 즉시 값을 출력한다.
	printf("최종요금: %d원\n", (int)(free * rate[age-1]));
	putchar('\n');
	return 0;
}