#include <stdio.h>

int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) {
	if (money < cost)
		return -1;

	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("\t������ ����: %d\n", itemCnt);
	printf("\t�ܾ�: %d\n", money);
	return 1;
}

int main() {

	// �������� ���.
	if (buyItem(3000, 5) == -1)
		printf("�ݾ��� �����ϼ���.\n");
	buyItem(50, 7);
	/*
	itemCnt++;
	money -= 10;
	*/
}