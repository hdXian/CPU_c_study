#include "nowarn.h"
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "hello";

	int length;
	length = sizeof(str) / sizeof(char); // 항상 100이 된다. str[100]이기 때문.
	printf("%d\n", length);

	length = strlen(str); // 대상 문자열의 길이를 리턴.
	printf("%d\n", length);

	char str2[100];
	strcpy(str2, str);
	printf("str2: %s, length: %d\n", str2, (int)strlen(str2));

	strcat(str, " World!"); // str의 뒤에 문자열을 덧붙인다.
	printf("%s\n", str);

	char str3[] = "sample";
	char str4[] = "simple";

	int cmp = strcmp(str3, str4); // 두 문자열을 비교한다. str3가 str4보다 사전상 앞이면 -1, 같으면 0, 뒤면 1 리턴.
	printf("%d\n", cmp);
}