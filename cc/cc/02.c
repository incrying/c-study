#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char** p=NULL;
	int b = 0;

	printf("문자열의 개수: ");
	scanf("%d", &b);

	if (p = (char**)malloc(b * sizeof(char*)) != NULL) {
		for (int i = 0; i < b; i++) {
			p[i] = (char*)malloc(100);
		}
	}

	for (int i = 0; i < b; i++) {
		sprintf(p[i],"문자열 %d", i+1);
		printf("%s \n", p[i]);
		free(p[i]);
	}
	
	free(p);

	return 0;
}