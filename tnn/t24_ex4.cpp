#include <stdio.h>

int main() {
	int a = 10;
	
	int* p = &a;
	int** pp = &p;

	printf("a = %d\n", a);
	printf("&a = %Iu\n", &a);

	printf("p = %d\n", p);
	printf("&p = %Iu\n", &p);

	printf("pp = %Iu\n", pp);

}