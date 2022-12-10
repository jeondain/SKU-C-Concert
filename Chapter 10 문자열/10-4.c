#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[100];
	int i;

	printf("텍스트를 입력하시오 : ");
	gets_s(s, 99);
	printf("공백이 제거된 텍스트 : ");
	
	for (int i = 0; s[i] != '\0'; i++) {
		if (!(s[i] == ' ' && s[i + 1] == ' '))
			printf("%c", s[i]);
	}
}