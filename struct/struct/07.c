/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int quadrant(struct point p);

struct point {
	int x;
	int y;
};

int main(void) {

	struct point p1 = { 2,2 };

	printf("(%d,%d)의 사분면 = %d", p1.x, p1.y, quadrant(p1));

	return 0;
}

int quadrant(struct point p) {
	if (p.x > 0 && p.y > 0) {
		return 1;
	}
	else if (p.x < 0 && p.y > 0) {
		return 2;
	}
	else if (p.x > 0 && p.y < 0) {
		return 3;
	}
	else if (p.x < 0 && p.y < 0) {
		return 4;
	}
	else
		return 0;
}*/