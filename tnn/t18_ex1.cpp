#include "nowarn.h"
#include <stdio.h>

int main() {

	int k;
	for (int i = 0; ; i++) {
		scanf("%d", &k);
		if (k == 0) break;
		printf("%d��°: %d\n", i + 1, k);
	}
}