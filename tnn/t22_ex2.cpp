#include "nowarn.h"
#include <stdio.h>

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
....
*/

int main() {

	int p[10][10] = { 0 };


	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i+1; j++) {
			if (j == 0 || j == i)
				p[i][j] = 1;
			else
				p[i][j]= p[i-1][j] + p[i-1][j-1];

			printf("%d ", p[i][j]);
		}
		printf("\n");
	}

}