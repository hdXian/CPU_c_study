#include <stdio.h>

struct ProductInfo {
	int num;
	const char* name;
	int cost;
};

int main() {
	ProductInfo pi{ 12345, "제주 한라봉", 20000 };

	ProductInfo* ppi = &pi;

	printf("상품번호: %d\n", ppi->num); // ppi->num == (*ppi).num
	printf("상품명: %s\n", ppi->name);
	printf("가격: %d\n", ppi->cost);

}