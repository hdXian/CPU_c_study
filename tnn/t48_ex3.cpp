#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(unsigned int(time(NULL))); // ���� �ð��� �������� ���� �õ� ����.

	for (int i = 0; i < 10; i++)
		printf("%d\n", rand() % 10 + 1); // ���� ���� ���� ���� ����. ���� ������ �ƴϴ�.
}