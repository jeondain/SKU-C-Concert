#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char password[5];

	printf("��й�ȣ�� �Է��Ͻÿ�: ");

	for (int i = 0; i < 4; i++) {
		password[i] = _getch();
		_putch('*');
	}
	password[4] = '\0';
	putchar('\n');
	if (strcmp(password, "1234") == 0)
		printf("��й�ȣ ��ġ\n");
	else
		printf("��й�ȣ ����ġ\n");
}