#include <stdio.h>

int main(void) {
	char a[50];
	int k = 1;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(a, 50);
	
	
	if (a[0] == '\0') {
		printf("�ܾ��� ���� 0 �Դϴ�.");
		return;
	}
	
	for (int i = 0; i < a[i]; i++) {

		if (a[i] == ' ') {
			k++;
		}
	}

	printf("�ܾ��� ���� %d�Դϴ�.", k);
}