#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i, count = 1;

	printf("�ؽ�Ʈ�� �Է��Ͻÿ� : ");
	gets_s(str, 99);
	
	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ')
			count++;
	}
	printf("���ڿ� �ܾ� ���� : %d\n", count);
}