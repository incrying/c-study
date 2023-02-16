#include <stdio.h>

int main(void) {
	char a[50];
	int k = 1;

	printf("문자열을 입력하시오: ");
	gets_s(a, 50);
	
	
	if (a[0] == '\0') {
		printf("단어의 수는 0 입니다.");
		return;
	}
	
	for (int i = 0; i < a[i]; i++) {

		if (a[i] == ' ') {
			k++;
		}
	}

	printf("단어의 수는 %d입니다.", k);
}