#include "nowarn.h"
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	if (n % 2 == 0) // if(1) == if(true) == if(n) (n != 0) 0�� �ƴ� ���� ������ ����Ѵ�.
		printf("n�� ¦���Դϴ�.\n");
	else
		printf("n�� Ȧ���Դϴ�.\n");
	
}