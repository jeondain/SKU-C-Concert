#include <stdio.h>
#include <string.h>

int main() {
	char str[100], ans[100];
	int i;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(str, 99);

	for (i = 0; i < strlen(str); i++) {
		ans[strlen(str) - 1 - i] = str[i];
	    ans[strlen(str)] = '\0';
	}

	printf("�Ųٷ� ���: %s\n", ans);
}
