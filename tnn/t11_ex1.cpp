#include "nowarn.h"
#include <stdio.h>


int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	bool p = a >= b; // ���̸� 1, �����̸� 0 ����
	bool q = a <= b;
	bool r = a != b;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
	
}