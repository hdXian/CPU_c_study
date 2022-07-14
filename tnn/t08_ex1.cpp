#include <stdio.h>

int main() {
	char a = 65;

	printf("%d %c\n", a, a);
	printf("%d %c\n", a + 1, a + 1);
	printf("%d %c\n", a + a, a + a);
}