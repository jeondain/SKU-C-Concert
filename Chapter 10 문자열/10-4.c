#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[100];
	int i;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(s, 99);
	printf("������ ���ŵ� �ؽ�Ʈ : ");
	
	for (int i = 0; s[i] != '\0'; i++) {
		if (!(s[i] == ' ' && s[i + 1] == ' '))
			printf("%c", s[i]);
	}
}