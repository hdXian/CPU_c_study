#include "nowarn.h"
#include <stdio.h>

int main() {
	char c;
	printf("���ĺ� �Է�>> "); scanf("%c", &c);
	printf("�Է��� ���ĺ�: %c, ���� ���ĺ�: %c\n", c, c + 1);
}