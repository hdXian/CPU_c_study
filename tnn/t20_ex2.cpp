#include <stdio.h>

int main() {
	int arr[5] = { 3,1,4,1,5 };

	
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) // �迭 ��� ���� ���ϱ�: sizeof(arr) / sizeof(int)
		printf("%d ", arr[i]);
}