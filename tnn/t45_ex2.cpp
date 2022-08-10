#include "nowarn.h"
#include <stdio.h>

#define SQUARE(x) (x * x)

// int square(int a) { return a * a; }

int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", SQUARE(a-1));
}