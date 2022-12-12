#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = NULL;
	int count = 0, num, sum = 0;
	double avg;
	fp = fopen("number.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패");
	else
		printf("파일 열기 성공");

	while (!feof(fp)) {
		fscanf(fp, "%d", &num);
		sum += num;
	}

	avg = sum / count;
	printf("정수들의 개수: %d\n", count);
	printf("정수들의 합계: %d\n", sum);
	printf("정수들의 평균: %.2lf\n", avg);

	fclose(fp);
}
