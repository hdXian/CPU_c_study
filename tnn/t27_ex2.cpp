#include <stdio.h>

/*
  arr = &arr[0]
  *arr = arr[0]
  p + 1 == ptr + sizeof(*p)
*/

int main() {

	int arr[2][3] = { {1,2,3}, {4,5,6} };

	int(*p)[3] = arr; // arr의 한 행(int[3])을 가리키는 배열 포인터

	// p는 arr의 시작 주소를 가리키고 있기 때문에 arr의 모든 요소에 접근 가능하다.
	// 단, p는 int[3]을 가리키는 배열 포인터이기 때문에 p+1은 arr[1]을 가리킨다.
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%d ", p[i][j]);
		printf("\n");
	}
	
}