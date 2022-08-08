#include <stdio.h>

struct ProductInfo {
	int num;
	const char* name;
	int cost;
};

void productSale(ProductInfo *p, int percent) {
	p->cost -= p->cost * percent / 100;
}

int main() {
	ProductInfo pi{ 12345, "���� �Ѷ��", 20000 };

	ProductInfo* ppi = &pi;

	productSale(&pi, 10);

	printf("��ǰ��ȣ: %d\n", ppi->num); // ppi->num == (*ppi).num
	printf("��ǰ��: %s\n", ppi->name);
	printf("����: %d\n", ppi->cost);

}