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
		printf("[���%d]\n", i + 1);
		printf("�̸��� �Է��Ͻÿ�: ");
		gets_s(list[i].name, 10);
		printf("����ȭ��ȣ�� �Է��Ͻÿ�: ");
		gets_s(list[i].num1, 100);
		printf("�޴�����ȣ�� �Է��Ͻÿ�: ");
		gets_s(list[i].num2, 100);
	}

	struct p l[1]={0,0,0};

	printf("\n");
	printf("�˻��� �̸��� �Է��Ͻÿ�: ");
	gets_s(l[0].name, 10);

	for (int i = 0; i < 3; i++) {
		if (strcmp(list[i].name, l[0].name)==0) {
			printf("����ȭ��ȣ: %s\n", list[i].num1);
			printf("�޴�����ȣ: %s\n", list[i].num2);
		}
	}

	return 0;
}*/
