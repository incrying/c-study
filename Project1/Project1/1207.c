#include <stdio.h>
#include <ctype.h>

int get_response(char* a);

int main(void) {
	char a[50];
	int k = 0;

	printf("������ �Ͻðڽ��ϱ� ");
	gets_s(a, 50);

	k = get_response(a);

	if (k == 1) {
		printf("�������� �亯");
	}
	else if(k==0)
		printf("�������� �亯");
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
		printf("�ٽ� �Է��� �ֽʽÿ�.");
}