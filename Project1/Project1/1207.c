#include <stdio.h>
#include <ctype.h>

int get_response(char* a);

int main(void) {
	char a[50];
	int k = 0;

	printf("게임을 하시겠습니까 ");
	gets_s(a, 50);

	k = get_response(a);

	if (k == 1) {
		printf("긍정적인 답변");
	}
	else if(k==0)
		printf("부정적인 답변");
}

int get_response(char* a) {
	int k = 0;
	
	for (int i = 0; i < a[i]; i++) {
		a[i] = tolower(a[i]);
	}

	if ((strcmp(a,"yes")==0) || (strcmp(a,"ok")==0)) {
		k = 1;
		return k;
	}
	else if (strcmp(a,"no")==0) {
		k = 0;
		return k;
	}
	else
		printf("다시 입력해 주십시오.");
}