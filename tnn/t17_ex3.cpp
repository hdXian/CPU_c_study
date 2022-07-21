#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i, sum;

	for (i = 1, sum = 0; i <= n; sum += i, i++); // for문 몸체가 필요 없을 경우 빼고 작성해도 된다.

	printf("%d\n", sum);
}