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

	printf("첫 번째 파일 이름: ");
	scanf("%s", a);

	printf("두 번째 파일 이름: ");
	scanf("%s", b);

	if ((fp1 = fopen(a, "r")) == NULL) {
		fprintf(stderr, "파일 %s를 열 수 없습니다.", a);
		exit(1);
	}

	if ((fp2 = fopen(b, "r")) == NULL) {
		fprintf(stderr, "파일 %s를 열 수 없습니다.", b);
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
	printf("두 파일은 서로 같습니다.");
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/