#define _CRT_SECURE_NO_WARNINGS
#define ENTRIES 5
#include <stdio.h>
#include <string.h>

int main(void) {
	char dic[ENTRIES][2][30] = {
		{"book","å"},
		{"boy","�ҳ�"},
		{"computer","��ǻ��"},
		{"language","���"},
		{"rain","��"}
	};
	char word[30];
	printf("�ܾ �Է��Ͻÿ�: ");
	gets_s(word, 30);

	for (int i = 0; i < ENTRIES; i++) {
		if (strcmp(dic[i][0], word) == 0) {
			printf("%s : %s", dic[i][0], dic[i][1]);
			return 0;
		}
	}
	printf("������ ���� �ܾ� �Դϴ�.");
}