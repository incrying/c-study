/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* fp1;
	char a[100];
	char b[100];

	printf("파일의 이름을 입력하시오: ");
	scanf("%s", a);

	if ((fp1 = fopen(a, "w")) == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다.");
		exit(1);
	}

	while (fgets(b, 100, stdin) != 0)
		fputs(b, fp1);

	fclose(fp1);

	return 0;
}*/