#include "nowarn.h"
#include <stdio.h>

int main() {

	int sel;
	// makeSel:
	printf("�� ����: 1\n�ҷ�����: 2\n����: 3\nũ����: 4\n>> ");
	scanf("%d", &sel);

	switch (sel) {
	case 1:
		printf("���� - �� ����\n");
		break;
	case 2:
		printf("���� - �ҷ�����\n");
		break;
	case 3:
		printf("���� - ����\n");
		break;
	case 4:
		printf("���� - ũ����\n");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		// goto makeSel; makeSel�� ����� �������� �̵�. �ڵ� �������� ���ϰ� ���Ͻ��� ����� �������� �ʴ´�.
		break;
	}
}