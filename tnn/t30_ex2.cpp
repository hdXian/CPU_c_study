#include <stdio.h>

int main() {
	int arr[3][3] = { 0 }; // arr �����ּҸ� 100�̶� ���� ��

	// arr -> arr[0] -> arr[0][0]
	// arr == &arr[0], arr[0] == &arr[0][0]

	printf("%u\n", &arr[0][0]); // 100. arr[0][0]�� �ּ�

	printf("%u\n", arr[0] + 1); // 104. arr[0][1]�� �ּ�
	printf("%u\n", &arr[0] + 1); // 112. arr[1]�� �ּ�
	printf("%u\n", arr + 1); // 112. arr[1] �ּ�.
	printf("%u\n", &arr + 1); // 136. arr �� �ּ�.

}