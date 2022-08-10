#include <stdio.h>

int main() {
	char a = 12, b = 10; // 00001100, 00001010

	printf("%d\n", a & b);
	printf("%d\n", a | b);
	printf("%d\n", a ^ b);
	printf("%d\n", ~a);
}