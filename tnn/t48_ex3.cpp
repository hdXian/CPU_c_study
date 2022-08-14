#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(unsigned int(time(NULL))); // 현재 시간을 기준으로 난수 시드 생성.

	for (int i = 0; i < 10; i++)
		printf("%d\n", rand() % 10 + 1); // 일정 범위 내의 난수 생성. 실제 난수는 아니다.
}