/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* fp1;
	FILE* fp2;
	char a[100];
	char b[100];

	if ((fp1 = fopen("sample1.txt", "w")) == NULL) {
		fprintf(stderr, "���� 1�� �� �� �����ϴ�.");
		exit(1);
	}

	if ((fp2 = fopen("sample2.txt", "wb")) == NULL) {                      //�� ���� �ִ� �� �����ϱ� �ٽ� ����!!!!!!!!!!!!!!!!
		fprintf(stderr, "���� 2�� �� �� �����ϴ�.");
		return 1;
	}

	for (int i = 0; i < 100; i++) {
		a[i] = rand() / 100;
		b[i] = rand() / 100;
	}

	for (int i = 0; i < 100; i++) {
		fwrite(b, sizeof(int), 100, fp2);
		fprintf(fp1, "%f", a[i]);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/