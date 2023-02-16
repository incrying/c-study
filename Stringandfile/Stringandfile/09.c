/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fp1;
	FILE* fp2;
	FILE* fp3;
	char a[100];
	char file1[100], file2[100], file3[100];

	if (argc >= 4) {
		strcpy(file1, argv[1]);
		strcpy(file2, argv[2]);
		strcpy(file3, argv[3]);
	}
	else {
		printf("인수가 부족합니다.\n");
		return 0;
	}

	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "파일 1을 열 수 없습니다.");
		exit(1);
	}

	if ((fp2 = fopen(file2, "r")) == NULL) {
		fprintf(stderr, "파일 2를 열 수 없습니다.");
		exit(1);
	}

	if ((fp3 = fopen(file3, "w")) == NULL) {
		fprintf(stderr, "파일 1을 열 수 없습니다.");
		exit(1);
	}

	while (fgets(a, 100, fp1) != NULL)
		fputs(a, fp3);

	while (fgets(a, 100, fp2) != NULL)
		fputs(a, fp3);

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);

	return 0;

}*/