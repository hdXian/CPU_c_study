#include "nowarn.h"
#include <stdio.h>

int main() {
	
	int n;
	int arr[1000]; // 코딩에서 1000은 그다지 큰 수가 아님.

	printf("입력할 숫자의 개수 입력: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = n - 1; i >= 0; i--) 
		printf("%d ", arr[i]);
	

	return 0;
	
}