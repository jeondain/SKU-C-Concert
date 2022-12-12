#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct employee {
	int num;
	char name[10];
	char phonenum[20];
	int age;
} Employee;

int main() {
	Employee list[5] = { {1, "홍길동", "111-111", 29}, {2, "김길동", "222-222", 21}, {3, "최길동", "333-333", 32},
		{4, "이길동", "444-444", 26}, {5, "박길동", "555-555", 18} };
	int i;

	for (i = 0; i < 10; i++) {
		if (list[i].age >= 20 && list[i].age <= 30)
			printf("%s %d\n", list[i].name, list[i].num);
	}
}