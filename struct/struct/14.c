#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct music {
	char music[100];
	char singer[100];
	char s[100];
	int j;
}a;

a list[10];

int main(void) {
	int b;
	a c;

	while (b == 4) {
		printf("=============\n");
		printf("1.�߰�\n2.���\n3.�˻�\n4.����\n");
		printf("=============\n");

		printf("���� ���� �Է��ϼ���: ");
		scanf("%d", &b);

		if (b == 1) {
			for (int i = 0; i < 10; i++) {
				if(list[i].music == '\0')
				printf("����: ");
				scanf("%s", list[i].music);

				printf("����: ");
				scanf("%s", list[i].singer);

				printf("��ġ: ");
				scanf("%s", list[i].s);

				printf("�帣(0: ����, 1: ��, 2: Ŭ����, 3: ��ȭ����): ");
				scanf("%d", &list[i].j);
			}
		}

		else if (b == 2) {
			printf("����� �뷡�� �̸��� �Է��Ͻÿ�: ");
			scanf("%s", c.music);

			
		}
	}


}
