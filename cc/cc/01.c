/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;
    int b;
    int sum = 0;

    printf("������ ����: ");
    scanf("%d", &b);
    a = (int*)malloc(sizeof(int) * b);

    if (a == NULL) {
        printf("���� �Ҵ� ����\n");
        exit(1);
    }
    for (int i = 0; i < b; i++) {
        printf("���� ������ �Է��ϼ���: ");
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("���� %d�Դϴ�.", sum);
    free(a);
    return 0;
}*/