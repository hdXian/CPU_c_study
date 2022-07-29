#include <stdio.h>

int main() {
	typedef int Pair[2]; // Pair는 길이 2인 int 배열.

	Pair point = { 3,4 };

	printf("(%d, %d)\n", point[0], point[1]);
	
}