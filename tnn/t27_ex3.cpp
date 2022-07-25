#include <stdio.h>

int main() {
	// �迭 �̸��� �迭�� ù ��° ����� �ּ��̰�, arr�� ù ��° ��Ҵ� {1,2,3}�̹Ƿ� int[3] �����̴�.
	int arr[2][3] = { {1,2,3}, {4,5,6} };

	for (int(*row)[3] = arr; row < arr + 2; row++) { // *row == arr[0], arr[1]

		// *col=arr[0][0], arr[0][1], ... arr[0]�� *col�� �����Ƿ� col++�� arr[0][0], arr[0][1], ...
		for (int* col = *row; col < *row + 3; col++)
			printf("%d ", *col);
		printf("\n");
	}

}