#include "nowarn.h"
#include <stdio.h>

int main() {

	double w, h;
	scanf("%lf%lf", &w, &h);

	printf("¸ö¹«°Ô: %.2lf, Å°: %.2lf, BMI: %.2lf\n", w, h, w / (h * h));
}