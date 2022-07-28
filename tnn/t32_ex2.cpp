#include <stdio.h>

int Func1() {
	printf("first\n");
	return 1;
	printf("secnod\n");
	return 2;
}

void Func2() {
	printf("first\n");
	return;
	printf("secnod\n");
	return;
}

int main() {
	int a = Func1();
	printf("%d\n", a);

	Func2();
}