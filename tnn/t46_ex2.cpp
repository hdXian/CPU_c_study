#include <stdio.h>

int main() {
	char a = 22;
	printf("%d\n", a << 1);
	// �ڷ��� ������ �Ѿ� ����Ʈ�ϴ°�� �˾Ƽ� short, int, long ������ �ٲپ� ��µȴ�.
	// ��, char c = a<<6 ���� ���� �߸��°� ����.
	printf("%d\n", a << 3);
	printf("%d\n", a << 6);

	// ���������� ����Ʈ�ϴ� ������ ���� �غ��� 0�̹Ƿ� ���� �ٲ����� �ʴ´�.
	printf("%d\n", a >> 1);
	printf("%d\n", a >> 3);
	printf("%d\n", a >> 6);
}