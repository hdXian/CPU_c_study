#include "nowarn.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;
	int n;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);

		if (n <= 0) {
			printf("Input Error\n");
			exit(0); // ���α׷��� ��� �����Ѵ�.
		}
		sum += n;
	}
	printf("sum = %d\n", sum);
}