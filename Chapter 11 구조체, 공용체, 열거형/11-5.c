#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct complex_number{
	double a, b;
} Complex_number;

int main() {
	Complex_number list[3];

	printf("ù ��° ���Ҽ��� �Է��Ͻÿ�(a, b): ");
	scanf("%lf %lf", &list[0].a, &list[0].b);
	printf("�� ��° ���Ҽ��� �Է��Ͻÿ�(a, b): ");
	scanf("%lf %lf", &list[1].a, &list[1].b);

	list[2].a = list[0].a + list[1].a;
	list[2].b = list[0].b + list[1].b;
	printf("%.1f + %.1fi\n", list[2].a, list[2].b);
}
