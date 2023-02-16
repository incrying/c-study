/*#include <stdio.h>

struct complex {
	double real;
	double imag;
};
struct complex complex_add(struct complex c1, struct complex c2);

int main(void) {
	struct complex a = { 1,2 };
	struct complex b = { 2,3 };
	struct complex c;

	c = complex_add(a, b);

	printf("%f + %fi\n", a.real, a.imag);
	printf("%f + %fi\n", b.real, b.imag);
	printf("%f + %fi\n", c.real, c.imag);
}

struct complex complex_add(struct complex c1, struct complex c2) {
	struct complex a;

	a.imag = c1.imag + c2.imag;
	a.real = c1.real + c2.real;

	return a;
}*/