#include <stdio.h>

int main() {

	int arr[2][3] = { {1,2,3}, {4,5,6} };

	printf("%d\n", sizeof(arr)); // 24 -> int[2][3]의 크기. 2차원 배열 전체의 크기를 가리킴.
	printf("%d\n", sizeof(arr[0])); // 12  -> int[3]의 크기. 2차원 배열의 요소, 즉 1차원 배열의 크기를 가리킴.
	printf("%d\n", sizeof(arr[0][0])); // 4 -> int의 크기. 즉 2차원 배열의 요소의 요소를 가리킴. 


	printf("%u\n", &arr);
	printf("%u\n", &arr[0]);
	printf("%u\n", &arr[0][0]);

}