/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;
    int b;
    int sum = 0;

    printf("정수의 개수: ");
    scanf("%d", &b);
    a = (int*)malloc(sizeof(int) * b);

    if (a == NULL) {
        printf("동적 할당 오류\n");
        exit(1);
    }
    for (int i = 0; i < b; i++) {
        printf("양의 정수를 입력하세요: ");
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("합은 %d입니다.", sum);
    free(a);
    return 0;
}*/