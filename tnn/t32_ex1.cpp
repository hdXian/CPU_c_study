#include <stdio.h>

int Plus(int a, int b) {
	return a + b;
}

int main() {
	int a;
	a = printf("�ȳ�abc\n"); // printf() => ����� ���� ����Ʈ ���� ��ȯ. �ѱ��� ���ڴ� 2����Ʈ.
	printf("%d\n", a);

	int sum;
	sum = Plus(2, 3);
	printf("%d\n", sum);
}