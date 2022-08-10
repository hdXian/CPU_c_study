#include <stdio.h>

// 매개변수에 무엇이 전달될지 모르므로 모두 ()로 감싸주는 것이 안전하다.
#define MAX(a,b) ( (a) > (b) ? (a) : (b) )

int main() {
	int a = 5, b = 10;
	printf("%d\n", MAX(a, b));
}