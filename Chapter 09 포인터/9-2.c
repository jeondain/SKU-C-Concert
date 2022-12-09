#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int data[5], i;

    printf("5개의 정수를 입력하시오: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", data + i);
    }

    printf("역순: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", *(data + i));
    }
}