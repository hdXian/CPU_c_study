#include <stdio.h>

int main() {

	int arr[] = { 1,2,3 };
	printf("arr: %Iu\n", arr);
	
	// arr은 배열 시작주소. 즉 &arr[0] 이므로 arr 자체에 1을 더하면  sizeof(int) 만큼 더해짐.
	printf("arr+1: %Iu\n", arr + 1);

	printf("&arr: %Iu\n", &arr);

	// arr의 주소에 1을 더하면 arr의 크기만큼 더해짐. 즉 sizeof(int) * n(배열 요소 개수)
	printf("&arr: %Iu\n", &arr + 1);

	// 즉, arr + 1 => arr + sizeof(int) => arr + 4
	//    &arr + 1 => arr + sizeof(arr 배열) => arr + 12.
}