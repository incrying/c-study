#define SIZE 10
#include <stdio.h>

int search(int* a, int n);

int main(void) {
	int a[SIZE] = {1,2,3,200,2,3,4,5,6,7};

	int k=search(a, SIZE);
	printf("������ 200������ ����� �ε���: %d",k);
}

int search(int* a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == 200) {
			return i;
		}
	}
}