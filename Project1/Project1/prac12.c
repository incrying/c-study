#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int* px, int* py);

int main(void) {
	int a,b=0;

	printf("�� ���� ������ �Է��Ͻÿ�(��: 10 20): ");
	scanf("%d %d", &a, &b);

	get_int(&a, &b);

}

void get_int(int* px, int* py) {
	printf("�� ������ ���� %d", (*px + *py));
}