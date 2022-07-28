#include <stdio.h>

void printArr(int(* arr)[3], int row, int col) {
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
}

int main() {
	int arr[2][3] = { { 1,2,3 }, { 4,5,6 } };

	printArr(arr, 2,3); // arr == arr[0]의 주소. arr[0] == int[3] 배열.

}