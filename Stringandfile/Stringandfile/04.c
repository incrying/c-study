/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE* fp1;
	FILE* fp2;
	char a[30];
	char b[30];
	char c[100];
	char d[100];

	printf("ù ��° ���� �̸�: ");
	scanf("%s", a);

	printf("�� ��° ���� �̸�: ");
	scanf("%s", b);

	if ((fp1 = fopen(a, "r")) == NULL) {
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.", a);
		exit(1);
	}

	if ((fp2 = fopen(b, "r")) == NULL) {
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.", b);
		exit(1);
	}

	while (1) {
		fgets(c, 100, fp1);
		fgets(d, 100, fp2);

		if (strcmp(c, d) != 0) {
			printf("%s\n%s", c, d);
			return 0;
		}
		else
			break;
	}
	printf("�� ������ ���� �����ϴ�.");
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/