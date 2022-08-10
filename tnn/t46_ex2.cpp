#include <stdio.h>

int main() {
	char a = 22;
	printf("%d\n", a << 1);
	// 자료형 범위를 넘어 시프트하는경우 알아서 short, int, long 등으로 바꾸어 출력된다.
	// 단, char c = a<<6 같은 경우는 잘리는게 맞음.
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);

	// 오른쪽으로 시프트하는 연산은 많이 해봤자 0이므로 딱히 바꿔주진 않는다.
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);
}