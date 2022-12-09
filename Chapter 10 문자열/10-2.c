#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char password[5];

	printf("비밀번호를 입력하시오: ");

	for (int i = 0; i < 4; i++) {
		password[i] = _getch();
		_putch('*');
	}
	password[4] = '\0';
	putchar('\n');
	if (strcmp(password, "1234") == 0)
		printf("비밀번호 일치\n");
	else
		printf("비밀번호 불일치\n");
}