#include <stdio.h>

int main() {
	// int(*ptr)[4] -> ��� 4��¥�� 1���� �迭�� ����Ű�� ���� ������
	int* parr[4]; // ������ 4���� ��ҷ� �ִ� �迭

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	parr[0] = &a;
	parr[1] = &c;
	parr[2] = &d;
	parr[3] = &b;

	for (int* p : parr)
		printf("%d ", *p);
	printf("\n");

	int arr[] = { 1,2,3,4 };

	for (int i = 0; i < 4; i++)
		parr[i] = &arr[i];

	for (int* p : parr)
		printf("%d ", *p);
}