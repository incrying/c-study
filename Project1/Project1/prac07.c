#include <stdio.h>

void array_add(int* a, int* b, int* c, int d);
void array_print(int* a, int* b, int* c, int d);

int main(void) {
	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int b[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int c[10] = { 0 };

	array_add(a, b, c, 10);
	array_print(a, b, c, 10);
}

void array_add(int* a, int* b, int* c,int d) {
	for (int i = 0; i < d; i++) {
		c[i] = a[i] + b[i];
	}
}

void array_print(int* a, int* b, int* c, int d) {
	printf("A = { ");
	for (int i = 0; i < d; i++) {
		printf("%d ",a[i]);
	}
	printf("}");

	printf("\n");

	printf("B = { ");
	for (int i = 0; i < d; i++) {
		printf("%d ", b[i]);
	}
	printf("}");

	printf("\n");

	printf("C = { ");
	for (int i = 0; i < d; i++) {
		printf("%d ", c[i]);
	}
	printf("}");
}