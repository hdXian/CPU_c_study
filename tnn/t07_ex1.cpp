#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	int a, b;
	scanf("%d%d", &a, &b); // 띄어서 입력해도 받아짐(ex 16 7)

	int sum, diff, mul, div;
	sum = a + b;
	diff = a - b;
	mul = a * b;
	div = a / b;
	printf("%d\n", sum);
	printf("%d\n", diff);
	printf("%d\n", mul);
	printf("%d\n", div);
	*/

	double a, b;
	scanf("%lf%lf", &a, &b); // 띄어서 입력해도 받아짐(ex 16 7)

	double sum, diff, mul, div;
	sum = a + b;
	diff = a - b;
	mul = a * b;
	div = a / b;
	printf("%.2f\n", sum);
	printf("%.2f\n", diff);
	printf("%.2f\n", mul);
	printf("%.2f\n", div);

	
}