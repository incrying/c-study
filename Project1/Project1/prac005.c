#define SIZE 10
#include <stdio.h>

int search(int* a, int n);

int main(void) {
	int a[SIZE] = {1,2,3,200,2,3,4,5,6,7};

	int k=search(a, SIZE);
	printf("월급이 200만원인 사람의 인덱스: %d",k);
}

int search(int* a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == 200) {
			return i;
		}
	}
}