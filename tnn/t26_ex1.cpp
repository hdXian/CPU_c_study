#include <stdio.h>

int main() {
	int arr[] = {1,2,3};
	int* p = arr;

	for (int i = 0; i < 3; i++)
		printf("%d ", *(p + i));
	printf("\n");

	for (int i = 0; i < 3; i++)
		printf("%d ", p[i]);
	printf("\n");


	// C언어 문법은 다음 다섯가지 표현을 모두 허용함(문법상 같은 의미로 해석됨). 단, 쓰지는 말것.
	// arr[i] == *(arr + i) == *(p + i) == *(i + p) == i[p]
	for (int i = 0; i < 3; i++)
		printf("%d ", i[p]);
	printf("\n");

}