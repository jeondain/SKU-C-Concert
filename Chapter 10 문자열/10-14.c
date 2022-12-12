#include <stdio.h>
#include <string.h>

int main() {
	char str[100];

	printf("텍스트를 입력하시오: ");
	gets_s(str, 99);

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	if (str[strlen(str) - 1] != '.')
		strcat(str, ".\0");

	printf("결과 텍스트 출력: %s\n", str);
}
