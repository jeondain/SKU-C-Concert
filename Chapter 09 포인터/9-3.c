#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void quadratic(double a, double b, double c, double* xplus, double* xminus) {
    *xplus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    *xminus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main() {
    double a, b, c, xplus, xminus;

    printf("��� a �Է� : "); scanf("%lf", &a);
    printf("��� b �Է� : "); scanf("%lf", &b);
    printf("��� c �Է� : "); scanf("%lf", &c);

    quadratic(a, b, c, &xplus, &xminus);
    printf("ù��° �Ǳ�: %lf\n", xplus);
    printf("�ι�° �Ǳ�: %lf\n", xminus);
}