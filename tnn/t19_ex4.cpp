#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int tmp = 1;
		for (int j = 0; j < i + 1; j++) {
			printf("%d ", tmp);
			tmp += 2;
		}
		printf("\n");
	}

	printf("\n");
	printf("\n");

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i * 2; j += 2) {
			printf("%d ", j);
		}
		printf("\n");
	}
}