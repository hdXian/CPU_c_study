#include <stdio.h>

int main() {

	int arr[2][3] = { {1,2,3}, {4,5,6} };

	printf("%d\n", sizeof(arr)); // 24 -> int[2][3]�� ũ��. 2���� �迭 ��ü�� ũ�⸦ ����Ŵ.
	printf("%d\n", sizeof(arr[0])); // 12  -> int[3]�� ũ��. 2���� �迭�� ���, �� 1���� �迭�� ũ�⸦ ����Ŵ.
	printf("%d\n", sizeof(arr[0][0])); // 4 -> int�� ũ��. �� 2���� �迭�� ����� ��Ҹ� ����Ŵ. 


	printf("%u\n", &arr);
	printf("%u\n", &arr[0]);
	printf("%u\n", &arr[0][0]);

}