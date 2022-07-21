#include "nowarn.h"
#include <stdio.h>

int main() {

	int a[5];

	for (int i = 0; i < 5; i++) {
		a[i] = i * 5;
		printf("%d ", a[i]);
	}
		
}