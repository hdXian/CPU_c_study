#include <stdio.h>

int main() {
	int a = 5;
	int b = 3;
	int sum = a + b;
	int diff = a - b;
	int mul = a* b;
	int div = 5 / 3; // 몫
	int res = 5 % 3;

	printf("%d + %d = %d\n", a, b, sum);
	printf("%d - %d = %d\n", a, b, diff);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %d\n", a, b, div);
	printf("%d %% %d = %d\n", a, b, res); // 문자 '%'를 출력하고싶으면 %%


	// 영역 드래그 후 Ctrl + h -> 단어 바꾸기 기능
	double a2 = 5;
	double b2 = 3;
	double sum2 = a2 + b2;
	double diff2 = a2 - b2;
	double mul2 = a2 * b2;
	double div2 = a2 / b2; // double 끼리의 나누기 연산 -> 소수점 아래로 몫이 구해짐
	double res2 = 3 % 5;

	printf("%.2f + %.2f = %.2f\n", a2, b2, sum2);
	printf("%.2f - %.2f = %.2f\n", a2, b2, diff2);
	printf("%.2f * %.2f = %.2f\n", a2, b2, mul2);
	printf("%.2f / %.2f = %.2f\n", a2, b2, div2);
	printf("%.2f %% %.2f = %.2f\n", a2, b2, res2); // 문자 '%'를 출력하고싶으면 %%

	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long));
	printf("%u\n", sizeof(int));

	unsigned int ui = 1;
	printf("%u\n", ui - 3);

	return 0;
}