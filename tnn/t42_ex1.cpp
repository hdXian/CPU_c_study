#include <stdio.h>

struct Time {
	int hour;
	int minute;
	int second;

	// ����ü�� �Լ��� �߰��� �� �ִ�.
	int totalSec() {
		return (hour * 3600) + (minute * 60) + second;
	}
};

int main() {
	Time t = { 1,22,48 };

	printf("%d\n", t.totalSec());
}