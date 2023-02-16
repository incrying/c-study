/*#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

double func(double x) {
	return x * x * x - x * x + 2;
}

void bisection(double a, double b) {
	double c;

	if (func(a) * func(b) >= 0) {
		return;
	}

	while (b - a >= EPSILON) {
		c = (a + b) / 2;
		if (func(c) * func(a) < 0) {
			b = c;
		}
		else {
			a = c;
		}
	}
	printf("최종 근 = %lf₩n", c);
}

int main(void)
{
	double a = -200, b = 200;
	bisection(a, b);
	return 0;
}*/