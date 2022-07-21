#include "nowarn.h"
#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);

	int grade = score / 10;
	switch (grade) {
	case 10:
	case 9:
		printf("A\n");
		break;

	case 8:
		printf("B\n");
		break;

	case 7:
		printf("C\n");
		break;

	case 6:
		printf("D\n");
		break;

	case 5:
		printf("E\n");
		break;
		
	default:
		printf("F\n");
		break;
	}
}