#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void array_fill(int* b, int n);
void array_print(int* b, int n);

int main(void) {
	int a[SIZE];
	int i;

	array_fill(a, SIZE);
	array_print(a, SIZE);
	
	return 0;
}
void array_fill(int* b, int n) {

	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++) {
		b[i] = rand();
	}
}
void array_print(int* b, int n) {
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
}