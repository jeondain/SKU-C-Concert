#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int data[5], i;

    printf("5���� ������ �Է��Ͻÿ�: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", data + i);
    }

    printf("����: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", *(data + i));
    }
}