#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct time {
	int hour;
	int minute;
	int second;
}Time;

Time diff_time (Time start, Time end) {
	Time result;
	int diffsec;

	diffsec = (end.hour * 3600 + end.minute * 60 + end.second) - (start.hour * 3600 + start.minute * 60 + start.second);

	result.hour = diffsec / 3600;
	result.minute = (diffsec % 3600) / 60;
	result.second = diffsec % 3600 % 60;

	return result;
}

int main() {
	Time list[3], result;

	printf("시작시간(시, 분, 초): ");
	scanf("%d %d %d", &list[0].hour, &list[0].minute, &list[0].second);
	printf("종료시간(시, 분, 초): ");
	scanf("%d %d %d", &list[1].hour, &list[1].minute, &list[1].second);

	result = diff_time(list[0], list[1]);

	printf("소요시간 %d:%d:%d\n", result.hour, result.minute, result.second);
}
