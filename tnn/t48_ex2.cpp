#include "nowarn.h"
#include <stdio.h>

// sscanf(), sprintf()

int main() {
	char str[] = "450";

	int n;
	sscanf(str, "%d", &n); // 문자열의 데이터를 입력받아 변수에 저장하는 함수.
	printf("%d\n", n);

	n = 450;
	char str2[100];
	sprintf(str2, "%d", n); // 변수의 값을 문자열에 공간에 출력하는 함수.
	printf("%s\n", str2);
}