#include <stdio.h>

int main() {
	int arr[] = {1,2,3};
	int* p = arr;

	for (int i = 0; i < 3; i++)
		printf("%d ", *(p + i));
	printf("\n");

	for (int i = 0; i < 3; i++)
		printf("%d ", p[i]);
	printf("\n");


	// C��� ������ ���� �ټ����� ǥ���� ��� �����(������ ���� �ǹ̷� �ؼ���). ��, ������ ����.
	// arr[i] == *(arr + i) == *(p + i) == *(i + p) == i[p]
	for (int i = 0; i < 3; i++)
		printf("%d ", i[p]);
	printf("\n");

}