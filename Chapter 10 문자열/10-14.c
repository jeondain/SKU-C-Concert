#include <stdio.h>
#include <string.h>

int main() {
	char str[100];

	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(str, 99);

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	if (str[strlen(str) - 1] != '.')
		strcat(str, ".\0");

	printf("��� �ؽ�Ʈ ���: %s\n", str);
}
