#include <stdio.h>

int main() {
	// 배열 이름은 배열의 첫 번째 요소의 주소이고, arr의 첫 번째 요소는 {1,2,3}이므로 int[3] 형태이다.
	int arr[2][3] = { {1,2,3}, {4,5,6} };

	for (int(*row)[3] = arr; row < arr + 2; row++) { // *row == arr[0], arr[1]

		// *col=arr[0][0], arr[0][1], ... arr[0]을 *col에 넣으므로 col++은 arr[0][0], arr[0][1], ...
		for (int* col = *row; col < *row + 3; col++)
			printf("%d ", *col);
		printf("\n");
	}

}