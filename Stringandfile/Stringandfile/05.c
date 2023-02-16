/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

typedef struct stu {
	char name[10];
	int a;
	int b;
	int c;
}w;

int main(void) {
	FILE* fp1;
	FILE* fp2;
	char a[30];
	char b[30];

	if ((fp1 = fopen("grade.txt", "r")) == NULL) {
		fprintf(stderr, "파일 1을 열 수 없습니다.");
		exit(1);
	}

	if ((fp2 = fopen("avg.txt", "w")) == NULL) {
		fprintf(stderr, "파일 2를 열 수 없습니다.");
		exit(1);
	}

	fgets(a, 30, fp1);
	fprintf(fp2, "이름\t평균\n");

	while (!feof(fp1)) {
		float avg;
		w b;
		fscanf(fp1, "%s\t%d\t%d\t%d", b.name, &b.a, &b.b, &b.c);
		avg = (b.a + b.b + b.c) / 3;
		fprintf(fp2, "%s\t%.2f\n", b.name, avg);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/
