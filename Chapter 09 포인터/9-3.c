#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void quadratic(double a, double b, double c, double* xplus, double* xminus) {
    *xplus = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    *xminus = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main() {
    double a, b, c, xplus, xminus;

    printf("계수 a 입력 : "); scanf("%lf", &a);
    printf("계수 b 입력 : "); scanf("%lf", &b);
    printf("계수 c 입력 : "); scanf("%lf", &c);

    quadratic(a, b, c, &xplus, &xminus);
    printf("첫번째 실근: %lf\n", xplus);
    printf("두번째 실근: %lf\n", xminus);
}