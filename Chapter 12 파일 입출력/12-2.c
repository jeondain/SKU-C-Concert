#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = NULL;
	int count = 0, num, sum = 0;
	double avg;
	fp = fopen("number.txt", "w");

	if (fp == NULL)
		printf("���� ���� ����");
	else
		printf("���� ���� ����");

	while (!feof(fp)) {
		fscanf(fp, "%d", &num);
		sum += num;
	}

	avg = sum / count;
	printf("�������� ����: %d\n", count);
	printf("�������� �հ�: %d\n", sum);
	printf("�������� ���: %.2lf\n", avg);

	fclose(fp);
}
