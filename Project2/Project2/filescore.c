/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	FILE* fp;
	char fname[100];
	int number;
	char name[20];
	float score;

	printf("성적 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	if ((fp = fopen(fname, "w")) == NULL)
	{
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.?n", fname);
		exit(1);
	}
	while (1)
	{
		printf("학번, 이름, 성적을 입력하시요 (음수이면 종료): ");
		scanf("%d", &number);
		if (number < 0)
			break;
		scanf("%s %f", name, &score);
		fprintf(fp, " %d %s %f", number, name, score);
	}
	fclose(fp);

	return 0;
}*/