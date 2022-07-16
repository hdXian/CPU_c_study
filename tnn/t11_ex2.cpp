#include "nowarn.h"
#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);

	bool p = (a >= 1) && (a <= 10);
	bool q = (a == 3) || (a == 7); // Ç×»ó false
	bool r = !q;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}