#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a;
	scanf("%c", &a);

	printf("입력된 값: %c, 아스키 코드: %d\n", a, a);

	int b;
	scanf("%d", &b);
	printf("입력된 값: %d, 대응 문자: %c\n", b, b);
}