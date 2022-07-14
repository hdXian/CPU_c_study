#include "nowarn.h"
#include <stdio.h>

int main() {
	char c;
	printf("알파벳 입력>> "); scanf("%c", &c);
	printf("입력한 알파벳: %c, 다음 알파벳: %c\n", c, c + 1);
}