#include <stdio.h>

// getchar(), putchar(), gets(), puts()�Լ��� ����(���ڿ�)�� �ٷ�� ������,
// printf(), scanf()���� �ӵ��� �ξ� ������.

int main() {
	char ch;
	ch = getchar(); // getchar(&ch)
	putchar(ch);
	getchar();
	putchar('\n');

	char str[100];

	gets_s(str); // ���鵵 �����Ͽ� �Է¹��� �� �ִ�.
	puts(str);
}