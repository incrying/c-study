/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* fp1;
	char a[100];
	char b[100];

	printf("������ �̸��� �Է��Ͻÿ�: ");
	scanf("%s", a);

	if ((fp1 = fopen(a, "w")) == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�.");
		exit(1);
	}

	while (fgets(b, 100, stdin) != 0)
		fputs(b, fp1);

	fclose(fp1);

	return 0;
}*/