#include "nowarn.h"
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i, sum;

	for (i = 1, sum = 0; i <= n; sum += i, i++); // for�� ��ü�� �ʿ� ���� ��� ���� �ۼ��ص� �ȴ�.

	printf("%d\n", sum);
}