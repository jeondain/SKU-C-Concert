#include <stdio.h>
#include <ctype.h>

int main() {
	char str[100];
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(str, 99);
	printf("�빮�� ��� : ");
	
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = (char)toupper(str[i]);
		printf("%c", str[i]);
	}
}