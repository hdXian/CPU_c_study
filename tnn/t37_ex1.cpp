#include <stdio.h>

int parity(int n) { // ¦���� 0, Ȧ���� 1 ����.
	return (n % 2 == 0) ? 0 : 1;
}

int main() {

	printf("%d\n", parity(5));
	printf("%d\n", parity(-3));
	printf("%d\n", parity(6));
}