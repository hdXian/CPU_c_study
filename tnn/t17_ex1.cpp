#include "nowarn.h"
#include <stdio.h>

int main() {

	int i;
	scanf("%d", &i);

	for (;i<=10 ; i++) { // 두번째 조건을 생략하면 true로 간주한다.
		printf("%d ", i);
	}
}