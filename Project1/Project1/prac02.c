#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void) {
	
	int s=200;
	int v=100;

	int sum=0;
	int diff=0;

	get_sum_diff(s, v, &sum, &diff);
	printf("���ҵ��� ��: %d", sum);
	printf("\n");
	printf("���ҵ��� ��: %d", diff);
	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
	}