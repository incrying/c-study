/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {
	int x, y;
};
typedef struct circle
{
	struct point center;
	double radius;
}CIRCLE;

double area(CIRCLE c);
double perimeter(CIRCLE c);


int main(void) {
	CIRCLE a = { {0,0},0 };

	printf("���� �߽���: ");
	scanf("%d %d", &a.center.x, &a.center.y);

	printf("���� ������: ");
	scanf("%lf", &a.radius);

	printf("���� ����=%lf, ���� �ѷ�=%lf", area(a), perimeter(a));

	return 0;
}

double area(CIRCLE c) {
	return ((c.radius) * (c.radius) * 3.14);
}

double perimeter(CIRCLE c) {
	return (2 * 3.14 * (c.radius));
}*/