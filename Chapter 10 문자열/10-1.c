#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char password[100];

	while (1) {
		printf("��ȣ�� �����Ͻÿ�: ");
		scanf("%s", password);
		
		int a = 0, A = 0, num = 0;

		for (int i = 0; password[i] != '\0'; i++) {
			if (password[i] >= 48 && password[i] < 58)
				num = 1;
			else if (password[i] >= 'A' && password[i] <= 'Z')
				A = 1;
			if (password[i] >= 'a'  && password[i] <= 'z')
				a = 1;
		}
		if (num == 1 && A == 1 && a == 1) {
			printf("������ ��ȣ�Դϴ�.\n");
			break;
		}
		else
			printf("����, �ҹ���, �빮�ڸ� ��� ��ȣ�� �ٽ� ���弼��!\n");
	}
}