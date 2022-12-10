#include <stdio.h>
#include <ctype.h>

int main() {
	char str[100];
	
	printf("텍스트를 입력하시오 : ");
	gets_s(str, 99);
	printf("대문자 출력 : ");
	
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = (char)toupper(str[i]);
		printf("%c", str[i]);
	}
}