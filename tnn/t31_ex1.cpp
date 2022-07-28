#include <stdio.h>

int itemCnt = 0;
int money = 100;

void buyItem() {
	itemCnt++;
	money -= 10;
	printf("아이템을 구매했습니다.\n");
	printf("\t아이템 개수: %d\n", itemCnt);
	printf("\t잔액: %d\n", money);
}

int main() {

	// 아이템을 산다.
	buyItem();
	/*
	itemCnt++;
	money -= 10;
	*/
}