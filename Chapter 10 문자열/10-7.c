#include <stdio.h>
#include <string.h>

int main() {
	char str[100], ans[100];
	int i;

	printf("텍스트를 입력하시오 : ");
	gets_s(str, 99);

	for (i = 0; i < strlen(str); i++) {
		ans[strlen(str) - 1 - i] = str[i];
	    ans[strlen(str)] = '\0';
	}

	printf("거꾸로 출력: %s\n", ans);
}
