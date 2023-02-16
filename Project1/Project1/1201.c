#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char x;

	printf("문자를 입력하시오: ");
	scanf("%c",&x);
	printf("아스키 코드값 = %d", x);
}
