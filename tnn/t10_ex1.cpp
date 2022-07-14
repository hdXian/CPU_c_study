#include <stdio.h>

int main() {
	int a = 5;
	printf("¿ø·¡ a°ª: %d\n", a);
	a += 3;
	printf("a: %d\n", a);

	a *= 7;
	printf("a: %d\n", a);

	a -= 6;
	printf("a: %d\n", a);

	a %= 7;
	printf("a: %d\n", a);

	a++;
	printf("a: %d\n", a);

	printf("a: %d\n", ++a);
}