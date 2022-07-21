/* 
* 2^0 = 1
* 2^1 = 2
* 2^2 = 4
* ....
*/


#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int tmp = 1;

	for (int i = 0, tmp = 1; i <= n; i++, tmp *= 2) {
		printf("2^%d = %d\n", i, tmp);
	}

	/*
	int i = 0, t = 1;

	while (i<=n) {
		printf("2^%d = %d\n", i, t);
		i++;
		t *= 2;
	}
	*/
}