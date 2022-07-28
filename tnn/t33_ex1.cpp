#include "nowarn.h"
#include <stdio.h>

void Swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);

	Swap(&a, &b);
	printf("%d %d\n", a, b);
}