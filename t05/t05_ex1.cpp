#include <stdio.h>

int main() {
	int a = 5;
	int b = 3;
	int sum = a + b;
	int diff = a - b;
	int mul = a* b;
	int div = 5 / 3; // ��
	int res = 5 % 3;

	printf("%d + %d = %d\n", a, b, sum);
	printf("%d - %d = %d\n", a, b, diff);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %d\n", a, b, div);
	printf("%d %% %d = %d\n", a, b, res); // ���� '%'�� ����ϰ������ %%


	// ���� �巡�� �� Ctrl + h -> �ܾ� �ٲٱ� ���
	double a2 = 5;
	double b2 = 3;
	double sum2 = a2 + b2;
	double diff2 = a2 - b2;
	double mul2 = a2 * b2;
	double div2 = a2 / b2; // double ������ ������ ���� -> �Ҽ��� �Ʒ��� ���� ������
	double res2 = 3 % 5;

	printf("%.2f + %.2f = %.2f\n", a2, b2, sum2);
	printf("%.2f - %.2f = %.2f\n", a2, b2, diff2);
	printf("%.2f * %.2f = %.2f\n", a2, b2, mul2);
	printf("%.2f / %.2f = %.2f\n", a2, b2, div2);
	printf("%.2f %% %.2f = %.2f\n", a2, b2, res2); // ���� '%'�� ����ϰ������ %%

	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long));
	printf("%u\n", sizeof(int));

	unsigned int ui = 1;
	printf("%u\n", ui - 3);

	return 0;
}