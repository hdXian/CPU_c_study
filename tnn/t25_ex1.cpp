#include <stdio.h>

int main() {
	int a = 10;
	int* p = &a;

	printf("p: %Iu\n", p);
	printf("p+1: %Iu\n", p + 1);
	printf("sizeof(int): %d\n", sizeof(int));

	// (������ ����) + 1 -> �ּ� + (�����Ͱ� ����Ű�� �ڷ����� ũ��)

}