#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct e_mail {
	char title[20];
	char receiver[10], sender[10];
	char content[100];
	int month, date;
	int priority;
};

int main() {
	struct e_mail mail = { "TITLE", "cat", "dog", "Hello World", 11, 15, 1 };

	printf("title: %s\n", mail.title);
	printf("date: %d/%d\n", mail.month, mail.date);
	printf("sender: %s\n", mail.sender);
	printf("receiver: %s\n", mail.receiver);
	printf("priority: %d\n", mail.priority);
	printf("content: %s\n", mail.content);
}