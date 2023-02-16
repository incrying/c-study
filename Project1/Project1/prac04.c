#include <stdio.h>

void array_print(int* s);

int main(void) {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	array_print(a);
}

void array_print(int* s) {

	int i;

	printf("A = { ");
	for (i = 0; i < 10; i++) {
		printf("%d ", s[i]);
	}
	printf("}");
}