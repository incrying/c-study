#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void count(char* a, char b);

int main(void) {
	char a[50];
	char b;

	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(a, 50);

	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
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

	printf("%c�� ����: %d", b, k);
}