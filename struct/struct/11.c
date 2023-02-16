/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct p {
	char name[10];
	char num1[100];
	char num2[100];
};

struct p list[3];

int main(void) {
	for (int i = 0; i < 3; i++) {
		printf("[사람%d]\n", i + 1);
		printf("이름을 입력하시오: ");
		gets_s(list[i].name, 10);
		printf("집전화번호를 입력하시오: ");
		gets_s(list[i].num1, 100);
		printf("휴대폰번호를 입력하시오: ");
		gets_s(list[i].num2, 100);
	}

	struct p l[1]={0,0,0};

	printf("\n");
	printf("검색할 이름을 입력하시오: ");
	gets_s(l[0].name, 10);

	for (int i = 0; i < 3; i++) {
		if (strcmp(list[i].name, l[0].name)==0) {
			printf("집전화번호: %s\n", list[i].num1);
			printf("휴대폰번호: %s\n", list[i].num2);
		}
	}

	return 0;
}*/
