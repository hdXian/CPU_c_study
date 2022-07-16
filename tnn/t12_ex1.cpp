#include "nowarn.h"
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	if (n % 2 == 0) // if(1) == if(true) == if(n) (n != 0) 0이 아닌 값은 참으로 취급한다.
		printf("n은 짝수입니다.\n");
	else
		printf("n은 홀수입니다.\n");
	
}