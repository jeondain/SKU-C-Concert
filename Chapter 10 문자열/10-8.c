#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;

	printf("텍스트를 입력하시오 : ");
	gets_s(str, 99);
	printf("소문자 출력 : ");
	
	for (i = 0; str[i] != '\0'; i++) {
		str[i] = (char)tolower(str[i]);
		printf("%c", str[i]);
	}
}
