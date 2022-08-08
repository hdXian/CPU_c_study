#include <stdio.h>

struct Time {
	int hour;
	int minute;
	int second;

	// 구조체에 함수를 추가할 수 있다.
	int totalSec() {
		return (hour * 3600) + (minute * 60) + second;
	}
};

int main() {
	Time t = { 1,22,48 };

	printf("%d\n", t.totalSec());
}