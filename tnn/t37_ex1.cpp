#include <stdio.h>

int parity(int n) { // Â¦¼ö¸é 0, È¦¼ö¸é 1 ¸®ÅÏ.
	return (n % 2 == 0) ? 0 : 1;
}

int main() {

	printf("%d\n", parity(5));
	printf("%d\n", parity(-3));
	printf("%d\n", parity(6));
}