#include <stdio.h>

int main() {
	int arr[3][3] = { 0 };

	// arr -> arr[0] -> arr[0][0]
	// arr == &arr[0], arr[0] == &arr[0][0]

	printf("%u\n", &arr); // 100. arr 시작주소
	printf("%u\n", arr); // 100. arr[0] 주소
	printf("%u\n", *arr); // 100. arr[0]가 가리키는 곳. arr[0][0] 주소

	printf("%u\n", &arr[0]); // 100. arr[0]의 주소. 즉 arr의 값.
	printf("%u\n", arr[0]); // 100. arr[0]은 arr의 첫번째 행을 가리킴.
	printf("%u\n", *arr[0]); // 0. arr[0][0]

	printf("%u\n", &arr[0][0]); // 100. arr[0][0]의 주소.

	printf("%d\n", arr[0][0]); // 0

}