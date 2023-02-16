#define _CRT_SECURE_NO_WARNINGS
#define ENTRIES 5
#include <stdio.h>
#include <string.h>

int main(void) {
	char dic[ENTRIES][2][30] = {
		{"book","책"},
		{"boy","소년"},
		{"computer","컴퓨터"},
		{"language","언어"},
		{"rain","비"}
	};
	char word[30];
	printf("단어를 입력하시오: ");
	gets_s(word, 30);

	for (int i = 0; i < ENTRIES; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s : %s", dic[i][0], dic[i][1]);
			return 0;
		}
	}
	printf("사전에 없는 단어 입니다.");
}