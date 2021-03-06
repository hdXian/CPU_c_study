#include <stdio.h>

int main() {
	printf("%d + %d = %d\n", 3.14, 3, 5); // %d에 실수를 넣으면 값이 깨짐(잘리는 수준이 아님)

	printf("%f\n",3.14); // %f는 기본적으로 소수점 6자리까지 출력
	printf("%.2f\n", 3.141592); // 소수 둘째자리까지 반올림(셋째자리에서 반올림)

	printf("%g\n", 3.141592); // %g: 실수 출력 - 지수 형태로
	printf("%.3g\n", 8723984712.123456789); // 유효숫자 3자리로 출력 %.ng -> 유효숫자 n자리로 실수 출력

	printf("%c %c %c\n", 'a', 'b', 'c'); // %c: 문자 출력. 유니코드 불가.

	printf("%s\n", "Hello");

	return 0;
}