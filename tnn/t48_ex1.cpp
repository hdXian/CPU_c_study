#include <stdio.h>

// getchar(), putchar(), gets(), puts()함수는 문자(문자열)만 다루기 때문에,
// printf(), scanf()보다 속도가 훨씬 빠르다.

int main() {
	char ch;
	ch = getchar(); // getchar(&ch)
	putchar(ch);
	getchar();
	putchar('\n');

	char str[100];

	gets_s(str); // 공백도 포함하여 입력받을 수 있다.
	puts(str);
}