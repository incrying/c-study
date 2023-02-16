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
		printf("1.추가\n2.출력\n3.검색\n4.종료\n");
		printf("=============\n");

		printf("정수 값을 입력하세요: ");
		scanf("%d", &b);

		if (b == 1) {
			for (int i = 0; i < 10; i++) {
				if(list[i].music == '\0')
				printf("제목: ");
				scanf("%s", list[i].music);

				printf("가수: ");
				scanf("%s", list[i].singer);

				printf("위치: ");
				scanf("%s", list[i].s);

				printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악): ");
				scanf("%d", &list[i].j);
			}
		}

		else if (b == 2) {
			printf("출력할 노래의 이름을 입력하시오: ");
			scanf("%s", c.music);

			
		}
	}


}
