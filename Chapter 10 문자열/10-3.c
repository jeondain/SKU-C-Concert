#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[100];
	int cnt[26] = { 0 };

	printf("�Է� ���ڿ� : ");
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++)
		++cnt[s[i] - 'a'];
	for (int i = 0; i < 26; i++) {
		if (cnt[i] != 0)
			printf("%c���ڰ� %d�� �����Ͽ���!\n", i + 'a', cnt[i]);
	}
}