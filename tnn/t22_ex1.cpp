#include "nowarn.h"
#include <stdio.h>

int main() {
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	printf("\n");
	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
		
}