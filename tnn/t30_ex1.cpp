#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	// arr -> arr[0] -> arr[0][0]
	// arr == &arr[0], arr[0] == &arr[0][0]

	printf("%u\n", &arr); // 100. arr �����ּ�
	printf("%u\n", arr); // 100. arr[0] �ּ�
	printf("%u\n", *arr); // 100. arr[0]�� ����Ű�� ��. arr[0][0] �ּ�

	printf("%u\n", &arr[0]); // 100. arr[0]�� �ּ�. �� arr�� ��.
	printf("%u\n", arr[0]); // 100. arr[0]�� arr�� ù��° ���� ����Ŵ.
	printf("%u\n", *arr[0]); // 0. arr[0][0]

	printf("%u\n", &arr[0][0]); // 100. arr[0][0]�� �ּ�.

	printf("%d\n", arr[0][0]); // 0

}