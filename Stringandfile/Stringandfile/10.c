#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* fp1;
	char a[100];
	int count = 0;

	if ((fp1 = fopen("test.txt", "r+")) == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다.");
		exit(1);
	}

	for (int i = 0; !feof(fp1); i++) {
		fgets(a, 100, fp1);
		printf("%d: ", i + 1);;
		puts(a);
	}

	fclose(fp1);

	return 0;
}