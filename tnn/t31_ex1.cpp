#include <stdio.h>

int itemCnt = 0;
int money = 100;

void buyItem() {
	itemCnt++;
	money -= 10;
	printf("�������� �����߽��ϴ�.\n");
	printf("\t������ ����: %d\n", itemCnt);
	printf("\t�ܾ�: %d\n", money);
}

int main() {

	// �������� ���.
	buyItem();
	/*
	itemCnt++;
	money -= 10;
	*/
}