#include <stdio.h>

void str_upper(char* a);

int main(void) {
	char a[50];

	printf("문자열을 입력하시오: ");
	gets_s(a, 50);

	str_upper(a);
}

void str_upper(char* a) {
	for (int i = 0; i < a[i]; i++) {
		if (a[i] >= 97 && a[i] <= 122) {
			printf("%c", a[i] - 32);
		}
		else {
			printf("%c", a[i]);
		}
	}
}