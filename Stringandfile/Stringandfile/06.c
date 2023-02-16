/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp1;
	char a[30];
	int b = 0;
	int c = 0;

	printf("파일 이름을 입력하시오: ");
	scanf("%s", a);

	if ((fp1 = fopen(a, "r")) == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다.");
		exit(1);
	}

	while (!feof(fp1)) {
		b = fgetc(fp1);
		if (isprint(b))
			c++;
	}
	printf("문자의 개수는 %d", c);
	fclose(fp1);
	return 0;
}*/