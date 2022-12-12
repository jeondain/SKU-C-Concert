#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i, count = 1;

	printf("텍스트를 입력하시오 : ");
	gets_s(str, 99);
	
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ')
			count++;
	}
	printf("문자열 단어 개수 : %d\n", count);
}