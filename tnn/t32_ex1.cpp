#include <stdio.h>

int Plus(int a, int b) {
	return a + b;
}

int main() {
	int a;
	a = printf("안녕abc\n"); // printf() => 출력한 문자 바이트 수를 반환. 한글은 글자당 2바이트.
	printf("%d\n", a);

	int sum;
	sum = Plus(2, 3);
	printf("%d\n", sum);
}