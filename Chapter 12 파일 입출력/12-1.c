#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp = NULL;
	char name;
	int age, pay;
	fp = fopen("employee.txt", "w"); 

	if (fp == NULL)
		printf("���� ���� ����");
	else
		printf("���� ���� ����\n");

	printf("���� �̸�: ");
	scanf("%s", &name);
	printf("����: ");
	scanf("%d", &age);
	printf("����: ");
	scanf("%d", &pay);
	
	fprintf(fp, "���� �̸�: %s\n����: %d\n����: %d\n", name, age, pay);

	fclose(fp);
}