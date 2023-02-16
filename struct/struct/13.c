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

	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf("%d", &a.type);

	if (a.type == 0) {
		printf("밑변과 세로의 길이를 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &a.data.tri.base, &a.data.tri.height);
		printf("면적은 %d", a.data.tri.base * a.data.tri.height * 1 / 2);
	}
	else if (a.type == 1) {
		printf("가로와 세로의 길이를 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &a.data.rect.width, &a.data.rect.height);
		printf("면적은 %d", a.data.rect.width * a.data.rect.height);
	}
	else if (a.type == 2) {
		printf("반지름을 입력하시오: ");
		scanf("%d", &a.data.circ.radius);
		printf("면적은 %d", a.data.circ.radius * a.data.circ.radius * 3);
	}
	else
		printf("잘못된 타입을 입력하셨습니다.");

	return 0;
}*/