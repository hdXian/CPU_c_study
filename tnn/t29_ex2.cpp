#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int* p;

	p = &a;
	*p = 30;

	p = &b;
	*p = 10;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", *p);
}