#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) continue;
		sum += i;
	}

	printf("3의 배수를 제외한 1부터 %d까지의 합: %d\n", n, sum);
}