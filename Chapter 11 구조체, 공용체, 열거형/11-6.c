#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { scissor, rock, paper } Game;

int main() {
	int x;
	Game computer = 0;
	srand(time(0));

	printf("����(0), ����(1), ��(2)�� �Է��ϼ���: ");
	scanf("%d", &x);

	computer = rand() % 3;
	printf("��ǻ�� : %d\n", computer);

	if (computer == x)
		printf("�����ϴ�.\n");
	else if ((computer + 1) % 3 == x)
		printf("����ڰ� �̰���ϴ�.\n");
	else
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
}
