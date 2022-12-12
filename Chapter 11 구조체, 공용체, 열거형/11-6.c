#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum { scissor, rock, paper } Game;

int main() {
	int x;
	Game computer = 0;
	srand(time(0));

	printf("가위(0), 바위(1), 보(2)를 입력하세요: ");
	scanf("%d", &x);

	computer = rand() % 3;
	printf("컴퓨터 : %d\n", computer);

	if (computer == x)
		printf("비겼습니다.\n");
	else if ((computer + 1) % 3 == x)
		printf("사용자가 이겼습니다.\n");
	else
		printf("컴퓨터가 이겼습니다.\n");
}
