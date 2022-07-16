#include "nowarn.h"
#include <stdio.h>

int main() {
	int i = 1;

	// while문으로 구현 가능. goto문은 사용을 권장하지 않는다.
	repeat:
	printf("%d\n", i);
	if (i < 10) {
		i++;
		goto repeat;
	}
}