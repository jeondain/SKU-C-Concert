#include <stdio.h>

int main() {
	char str[100];

	printf("텍스트를 입력한다 : ");
	gets_s(str, 99);
	printf("최종 텍스트 : ");

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
			str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
			printf("%c", str[i]);
	}
}
