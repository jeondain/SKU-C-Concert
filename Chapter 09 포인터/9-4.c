#include <stdio.h>

void get(double value, int* i_part, double* f_part) {
    *i_part = (int)value;
    *f_part = value - *i_part;
}

int main() {
    double PI = 3.14;
    int i_part;
    double f_part;

    get(PI, &i_part, &f_part);

    printf("������ = %d\n", i_part);
    printf("�Ҽ��� = %lf\n", f_part);
}
