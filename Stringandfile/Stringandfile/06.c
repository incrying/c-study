/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp1;
	char a[30];
	int b = 0;
	int c = 0;

	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", a);

	if ((fp1 = fopen(a, "r")) == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�.");
		exit(1);
	}

	while (!feof(fp1)) {
		b = fgetc(fp1);
		if (isprint(b))
			c++;
	}
	printf("������ ������ %d", c);
	fclose(fp1);
	return 0;
}*/