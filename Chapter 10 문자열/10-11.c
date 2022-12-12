#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a;

	printf("문자를 입력하시오: ");
	scanf("%c", &a);
	printf("%c 문자의 아스키 코드 값 = %d\n", a, a);
}
