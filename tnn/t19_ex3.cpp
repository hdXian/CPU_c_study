// 일이 자릿수가 3의 배수인 경우 * 출력
#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int tmp = i % 10;
		if (tmp == 3 || tmp == 6 || tmp == 9)
			printf("* ");
		else
			printf("%d ", i);
	}
}