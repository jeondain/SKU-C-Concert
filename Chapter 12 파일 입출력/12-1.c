#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = NULL;
	char name;
	int age, pay;
	fp = fopen("employee.txt", "w"); 

	if (fp == NULL)
		printf("파일 열기 실패");
	else
		printf("파일 열기 성공\n");

	printf("직원 이름: ");
	scanf("%s", &name);
	printf("나이: ");
	scanf("%d", &age);
	printf("월급: ");
	scanf("%d", &pay);
	
	fprintf(fp, "직원 이름: %s\n나이: %d\n월급: %d\n", name, age, pay);

	fclose(fp);
}