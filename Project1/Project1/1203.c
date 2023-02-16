#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void count(char* a, char b);

int main(void) {
	char a[50];
	char b;

	printf("공백 문자가 있는 문자열을 입력하시오: ");
	gets_s(a, 50);

	printf("개수를 셀 문자를 입력하시오: ");
	scanf("%c", &b);

	count(a, b);

}

void count(char* a, char b) {
	int k = 0;

	for (int i = 0; i < a[i]; i++) {
		if (a[i] == b) {
			k++;
		}
	}

	printf("%c의 개수: %d", b, k);
}