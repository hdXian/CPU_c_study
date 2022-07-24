#include <stdio.h>

int main() {
	int a = 10;
	int* p = &a;

	printf("p: %Iu\n", p);
	printf("p+1: %Iu\n", p + 1);
	printf("sizeof(int): %d\n", sizeof(int));

	// (포인터 변수) + 1 -> 주소 + (포인터가 가리키는 자료형의 크기)

}