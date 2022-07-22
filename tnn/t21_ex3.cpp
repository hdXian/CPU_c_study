#include "nowarn.h"
#include <stdio.h>

int main() {

	int n;
	int arr[100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0)
			count++;

	printf("%d\n", count);
}