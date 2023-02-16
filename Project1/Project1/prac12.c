#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int* px, int* py);

int main(void) {
	int a,b=0;

	printf("두 개의 정수를 입력하시오(예: 10 20): ");
	scanf("%d %d", &a, &b);

	get_int(&a, &b);

}

void get_int(int* px, int* py) {
	printf("두 정수의 합은 %d", (*px + *py));
}