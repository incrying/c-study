#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a,int b);
int lcm(int a, int b, int n);

int main(void) {
	int a,b=0;

	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d",&a, &b);

	int k = gcd(a, b);
	int m = lcm(a, b, k);

	printf("최대 공약수는 %d 입니다.\n", k);
	printf("최소 공배수는 %d 입니다.", m);

}

int gcd(int a,int b) {
	int gcd = 1;
	for (int i = 2;  i <= (a > b ? b : a); i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
		}
	}
	return gcd;
}

int lcm(int a,int b,int n) {
	int lcm;
	lcm = (a * b) / n;
	return lcm;
}