#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[100];

	printf("�ؽ�Ʈ�� �Է��Ѵ� : ");
	gets_s(str, 99);
	printf("���� �ؽ�Ʈ : ");

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
			str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
			printf("%c", str[i]);
	}
}
