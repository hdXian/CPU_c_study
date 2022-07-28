#include <stdio.h>

void printArr(int* arr, int length) { // int arr[]으로도 가능.
	for (int i = 0; i < length; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void mpdifyArr(int* arr, int length) { // int arr[]으로도 가능.
	for (int i = 0; i < length; i++)
		arr[i] += 2;
}

int main() {
	int arr[4] = { 1,2,3,4 };

	printArr(arr, 4);
	mpdifyArr(arr, 4);
	printArr(arr, 4);
}