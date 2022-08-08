#include <stdio.h>

struct ProductInfo {
	int num;
	const char* name;
	int cost;
};

void productSale(ProductInfo* p, int percent) {
	p->cost -= p->cost * percent / 100;
}

void productSwap(ProductInfo* p1, ProductInfo* p2) {
	auto tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


int main() {
	ProductInfo pi{ 12345, "제주 한라봉", 20000 };

	ProductInfo pi2{ 67890, "몽골 연어", 10000 };

	//productSale(&pi, 10);

	productSwap(&pi, &pi2);

	printf("상품번호: %d\n", pi.num);
	printf("상품명: %s\n", pi.name);
	printf("가격: %d\n", pi.cost);

	printf("상품번호: %d\n", pi2.num);
	printf("상품명: %s\n", pi2.name);
	printf("가격: %d\n", pi2.cost);

}