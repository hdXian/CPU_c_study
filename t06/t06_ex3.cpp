#include <stdio.h>

int main() {
	int math = 90;
	int korean = 95;
	int eng = 96;
	int sum = math + korean + eng;
	double avg = sum / 3.0; // or (double)sum / 3;

	printf("%.1f\n", avg);

	int a = 5 / 3;
}