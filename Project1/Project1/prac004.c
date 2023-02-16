#define SIZE 10
#include <stdio.h>

void array_copy(int* a, int* b, int n);
void print_array(int* a, int* b, int n);

int main(void) {
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int b[SIZE];

	array_copy(a, b, SIZE);
	print_array(a, b, SIZE);
}

void array_copy(int* a, int* b, int n) {
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

void print_array(int* a, int* b, int n) {
	printf("A[] = ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("B[] = ");
	for (int i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
}