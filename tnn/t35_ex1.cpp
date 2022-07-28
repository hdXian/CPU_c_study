#include <stdio.h>

void recur_func(int n) {
	if (n < 1)
		return;
	else {
		printf("n = %d\n", n);
		recur_func(n - 1);
	}
}

int main() {
	recur_func(5);
}