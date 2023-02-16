#include <stdio.h>

void merge(int* A, int* B, int* C, int n);

int main(void) {
	int a[4] = { 2,5,7,8 };
	int b[4] = { 1,3,4,6 };
	int c[8];

	merge(a, b, c, 4);

	printf("A = ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");

	printf("B = ");
	for (int i = 0; i < 4; i++) {
		printf("%d ", b[i]);
	}

	printf("\n");

	printf("C = ");
	for (int i = 0; i < 8; i++) {
		printf("%d ", c[i]);
	}

}
void merge(int* A, int* B, int* C, int n) {
	int i, a, c, b;
	for (a = 0, b = 0, c = 0; a < n && b < n;) {
		if (A[a] <= B[b])
			C[c++] = A[a++];
		else
			C[c++] = B[b++];
	}
	for (i = a; i < n; i++) {
		C[c++] = A[i];
	}
	for (i = b; i < n; i++) {
		C[c++] = B[i];
	}
}