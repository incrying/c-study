/*#include <stdio.h>

int main(void) {
	
	FILE* fp;

	fp = fopen("data.txt", "r+");
	if (fp == NULL) {
		fprintf(stderr, "������ �� �� �����ϴ�.");
		exit(1);
	}
	
	//fputs("This is an apple.", fp);
	fseek(fp, -6, SEEK_END);
	fputs("apple.", fp);

	fclose(fp);

	return 0;
}*/