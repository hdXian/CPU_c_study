#include "nowarn.h"
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "hello";

	int length;
	length = sizeof(str) / sizeof(char); // �׻� 100�� �ȴ�. str[100]�̱� ����.
	printf("%d\n", length);

	length = strlen(str); // ��� ���ڿ��� ���̸� ����.
	printf("%d\n", length);

	char str2[100];
	strcpy(str2, str);
	printf("str2: %s, length: %d\n", str2, (int)strlen(str2));

	strcat(str, " World!"); // str�� �ڿ� ���ڿ��� �����δ�.
	printf("%s\n", str);

	char str3[] = "sample";
	char str4[] = "simple";

	int cmp = strcmp(str3, str4); // �� ���ڿ��� ���Ѵ�. str3�� str4���� ������ ���̸� -1, ������ 0, �ڸ� 1 ����.
	printf("%d\n", cmp);
}