#include <stdio.h>

void convert(double* grades, double* scores, int size);
void print_array(double* grades, double* scores, int size);

int main(void) {
	double grades[10] = {0.00,0.50,1.00,1.50,2.00,2.50,3.00,3.50,4.00,4.30};
	double scores[10] = {0};
	double x;
	double y;

	convert(grades, scores, 10);
	print_array(grades, scores, 10);
}

void convert(double* grades, double* scores, int size) {
	int i;

	for (i = 0; i < size; i++) {
		scores[i] = grades[i] * 100 / 4.3;
	}
}

void print_array(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		printf("%05.2f ", grades[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%05.2f ", scores[i]);
	}
}