#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c;

	while (1) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		c = getchar(); getchar();

		if (c >= 97 && c <= 122) {
			printf("%c\n", c - 32);
		}
		else if (c >= 65 && c <= 90) {
			printf("%c\n", c + 32);
		}
		else if (c == '.') {
			break;
		}
		else
			printf("�ùٸ� ���ڸ� �Է��� �ּ���.\n");
	}
}