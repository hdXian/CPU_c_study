#include "nowarn.h"
#include <stdio.h>

int main() {
	int a = 20;
	char ch = 'a';

	int* p = &a;
	char* cp = &ch;

	printf("%d, %d\n", *p, p);


}