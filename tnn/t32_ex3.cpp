#include <stdio.h>

int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) {
	if (money < cost)
		return -1;

	itemCnt += cnt;
	money -= cost;
	printf("아이템을 구매했습니다.\n");
	printf("\t아이템 개수: %d\n", itemCnt);
	printf("\t잔액: %d\n", money);
	return 1;
}

int main() {

	// 아이템을 산다.
	if (buyItem(3000, 5) == -1)
		printf("금액을 충전하세요.\n");
	buyItem(50, 7);
	/*
	itemCnt++;
	money -= 10;
	*/
}