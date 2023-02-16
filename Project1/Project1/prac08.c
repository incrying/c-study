#include <stdio.h>

int main(void) {
	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int result = array_sum(a, 10);

	printf("A = { ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("}\n");

	printf("월급의 합: %d",result);
	
}

int array_sum(int* b, int c) {

	int sum = 0;

	for (int i = 0; i < c; i++) {
		sum = sum + b[i];
	}

	return sum;
}