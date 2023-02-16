#include <stdio.h>

void rid(char* a);

int main(void) {
	char a[50];

	printf("공백 문자가 있는 문자열을 입력하시오: ");
	gets_s(a, 50);

	rid(a);
}

void rid(char* a) {
	for (int i = 0; i < a[i]; i++) {
		if (a[i] != ' ') {
			printf("%c", a[i]);
		}
		else
			continue;
	}
}