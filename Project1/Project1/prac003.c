#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>

void array_fill(int* a, int n);

int main(void) {
	int a[SIZE];
	array_fill(a, SIZE);

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
}

void array_fill(int* a, int n) {
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand();
	}
}