#include "nowarn.h"
#include <stdio.h>

// sscanf(), sprintf()

int main() {
	char str[] = "450";

	int n;
	sscanf(str, "%d", &n); // ���ڿ��� �����͸� �Է¹޾� ������ �����ϴ� �Լ�.
	printf("%d\n", n);

	n = 450;
	char str2[100];
	sprintf(str2, "%d", n); // ������ ���� ���ڿ��� ������ ����ϴ� �Լ�.
	printf("%s\n", str2);
}