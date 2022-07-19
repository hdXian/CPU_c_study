#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	do {
		printf("0을 입력하세요!\n>>");
		scanf("%d", &n);
	} while (n != 0);

	printf("0을 입력하셨습니다!\n");
	printf("입력한 숫자>> %d", n);
}