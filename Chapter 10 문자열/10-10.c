#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	int i;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(s, 99);
	for (i = 0; i < (strlen(s) - 1) / 2; i++) {
		if (s[i] != s[strlen(s) - 1 - i])
			break;
	}
	if (i >= (strlen(s) - 1) / 2)
		printf("ȸ���Դϴ�.\n");
	else
		printf("ȸ���� �ƴմϴ�.\n");
}