#include <stdio.h>
#define SIZE 10

void array_copy(int* a, int* c, int n);

int main(void) {
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[SIZE] = { 0 };
	int i;
	
	array_copy(a, b, SIZE);

	for (i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}

}

void array_copy(int* a, int* c, int n) {
	int i;
	for (i = 0; i < n; i++) {
		c[i] = a[i];
	}
}