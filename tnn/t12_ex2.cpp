#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n > 0)
		printf("n�� ���\n");
	else if (n < 0)
		printf("n�� ����\n");
	else
		printf("n�� 0\n");
}