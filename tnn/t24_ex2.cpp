#include <stdio.h>

int main() {

	int a = 10, b = 20;

	int* p;
	p = &a;
	printf("%d\n", *p);

	p = &b;
	printf("%d\n", *p);
}