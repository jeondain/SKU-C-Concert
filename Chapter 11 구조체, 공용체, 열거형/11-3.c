#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct employee {
	int num;
	char name[10];
	char phonenum[20];
	int age;
} Employee;

int main() {
	Employee list[5] = { {1, "ȫ�浿", "111-111", 29}, {2, "��浿", "222-222", 21}, {3, "�ֱ浿", "333-333", 32},
		{4, "�̱浿", "444-444", 26}, {5, "�ڱ浿", "555-555", 18} };
	int i;

	for (i = 0; i < 10; i++) {
		if (list[i].age >= 20 && list[i].age <= 30)
			printf("%s %d\n", list[i].name, list[i].num);
	}
}