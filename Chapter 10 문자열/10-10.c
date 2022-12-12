#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	int i;

	printf("텍스트를 입력하시오: ");
	gets_s(s, 99);
	for (i = 0; i < (strlen(s) - 1) / 2; i++) {
		if (s[i] != s[strlen(s) - 1 - i])
			break;
	}
	if (i >= (strlen(s) - 1) / 2)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");
}