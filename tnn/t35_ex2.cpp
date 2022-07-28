#include "nowarn.h"
#include <stdio.h>

int facto(int n) {
	if (n == 1)
		return 1;
	else
		return n * facto(n - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	int res = facto(n);
	printf("%d! = %d", n, res);
}