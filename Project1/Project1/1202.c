#include <stdio.h>

void rid(char* a);

int main(void) {
	char a[50];

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
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