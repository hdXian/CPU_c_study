#include <stdio.h>

int main() {

	int arr[3] = { 1,2,3 };

	int(*p_arr)[3]; // 길이가 3인 int 배열을 가리킬 포인터 선언.
	p_arr = &arr;

	for (int i = 0; i < 3; i++)
		printf("%d\n", (* p_arr)[i]); // 즉, (*p_arr) == arr인 것.
}