#include "nowarn.h"
#include <stdio.h>

int main() {
	char arr[] = "Hel\0lo, World!"; // c��� ���ڿ� �ʱ�ȭ

	printf("%s\n", arr); // Hel ������ ���

	printf("�迭�� ũ��: %Iu\n", sizeof(arr) / sizeof(char));

	char s[100];
	scanf("%s", s);
	printf("%s\n", s);	

}