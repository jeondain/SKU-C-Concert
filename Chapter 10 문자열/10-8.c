#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(str, 99);
	printf("�ҹ��� ��� : ");
	
	for (i = 0; str[i] != '\0'; i++) {
		str[i] = (char)tolower(str[i]);
		printf("%c", str[i]);
	}
}
