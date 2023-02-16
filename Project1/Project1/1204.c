#include <stdio.h>

void count(char* A, int n);

int main(void) {
	char a[50];

	printf("문자열을 입력하시오: ");
	gets_s(a, 50);

	count(a, 50);
}

void count(char* A,int n) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;

	for (int k = 0; k < A[k]; k++) {
		if (A[k] == 'a') {
			a++;
		}
		else if (A[k] == 'b') {
			b++;
		}
		else if (A[k] == 'c') {
			c++;
		}
		else if (A[k] == 'd') {
			d++;
		}
		else if (A[k] == 'e') {
			e++;
		}
		else if (A[k] == 'f') {
			f++;
		}
		else if (A[k] == 'g') {
			g++;
		}
		else if (A[k] == 'h') {
			h++;
		}
		else if (A[k] == 'i') {
			i++;
		}
		else {
			printf("문자를 다시 입력해주세요.");
			return;
		}
	}

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	printf("d: %d\n", d);
	printf("e: %d\n", e);
	printf("f: %d\n", f);
	printf("g: %d\n", g);
	printf("h: %d\n", h);
	printf("i: %d\n", i);

}