#include <stdio.h>

struct  ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main() {
	ProductInfo pi = { 12345, "제주 한라봉", 19900 }; // 초기화 가능

	printf("상품 번호: %d\n", pi.num);
	printf("상품명: %s\n", pi.name);
	printf("가격: %d\n", pi.cost);

	printf("sizeof(pi) = %d\n", sizeof(pi)); // sizeof(int) + sizeof(char[100]) + sizeof(int)
	printf("%d\n", pi);

}