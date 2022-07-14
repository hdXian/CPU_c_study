#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	printf("숫자1 입력>> "); scanf("%d", &a);
	printf("숫자2 입력>> "); scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
}