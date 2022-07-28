#include "nowarn.h"
#include <stdio.h>

int main() {

	int arr[10][10];
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &arr[i][j]);

	int tmp = 0;

	printf("\n");
	for (int i = 0; i < n; i++) {
		tmp = 0;
		for (int j = 0; j < m; j++)
			tmp += arr[i][j];
		printf("%d\n", tmp);
	}
	
}