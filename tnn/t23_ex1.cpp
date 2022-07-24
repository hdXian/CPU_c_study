#include "nowarn.h"
#include <stdio.h>

int main() {
	char arr[] = "Hel\0lo, World!"; // c언어 문자열 초기화

	printf("%s\n", arr); // Hel 까지만 출력

	printf("배열의 크기: %Iu\n", sizeof(arr) / sizeof(char));

	char s[100];
	scanf("%s", s);
	printf("%s\n", s);	

}