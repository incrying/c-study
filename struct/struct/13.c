/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct shape {
	int type;
	union {
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }circ;
	}data;
};

int main(void) {

	struct shape a;

	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf("%d", &a.type);

	if (a.type == 0) {
		printf("�غ��� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
		scanf("%d %d", &a.data.tri.base, &a.data.tri.height);
		printf("������ %d", a.data.tri.base * a.data.tri.height * 1 / 2);
	}
	else if (a.type == 1) {
		printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
		scanf("%d %d", &a.data.rect.width, &a.data.rect.height);
		printf("������ %d", a.data.rect.width * a.data.rect.height);
	}
	else if (a.type == 2) {
		printf("�������� �Է��Ͻÿ�: ");
		scanf("%d", &a.data.circ.radius);
		printf("������ %d", a.data.circ.radius * a.data.circ.radius * 3);
	}
	else
		printf("�߸��� Ÿ���� �Է��ϼ̽��ϴ�.");

	return 0;
}*/