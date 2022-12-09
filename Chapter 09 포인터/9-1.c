#include <stdio.h>

int get_array_sum(int* A, int size) {
    int i, sum = 0;

    for (i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;
}

int main() {
    int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int i;

    printf("print_array()\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    putchar('\n');
    printf("배열 요소의 합 = %d\n", get_array_sum(data, 10));
}