#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	do {
		printf("0�� �Է��ϼ���!\n>>");
		scanf("%d", &n);
	} while (n != 0);

	printf("0�� �Է��ϼ̽��ϴ�!\n");
	printf("�Է��� ����>> %d", n);
}