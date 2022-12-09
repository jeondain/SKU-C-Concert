#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[100];
	int cnt[26] = { 0 };

	printf("입력 문자열 : ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++)
		++cnt[s[i] - 'a'];
	for (int i = 0; i < 26; i++) {
		if (cnt[i] != 0)
			printf("%c문자가 %d번 등장하였음!\n", i + 'a', cnt[i]);
	}
}