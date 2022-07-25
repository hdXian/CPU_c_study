#include <stdio.h>

/*
  arr = &arr[0]
  *arr = arr[0]
  p + 1 == ptr + sizeof(*p)
*/

int main() {

	int arr[2][3] = { {1,2,3}, {4,5,6} };

	int(*p)[3] = arr; // arr�� �� ��(int[3])�� ����Ű�� �迭 ������

	// p�� arr�� ���� �ּҸ� ����Ű�� �ֱ� ������ arr�� ��� ��ҿ� ���� �����ϴ�.
	// ��, p�� int[3]�� ����Ű�� �迭 �������̱� ������ p+1�� arr[1]�� ����Ų��.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
	
}