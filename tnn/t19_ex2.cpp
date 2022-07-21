#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			if (i == n)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}

	}
}