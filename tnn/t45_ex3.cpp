#include <stdio.h>

// �Ű������� ������ ���޵��� �𸣹Ƿ� ��� ()�� �����ִ� ���� �����ϴ�.
#define MAX(a,b) ( (a) > (b) ? (a) : (b) )

int main() {
	int a = 5, b = 10;
	printf("%d\n", MAX(a, b));
}