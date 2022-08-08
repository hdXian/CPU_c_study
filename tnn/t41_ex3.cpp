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
	ProductInfo pi{ 12345, "���� �Ѷ��", 20000 };

	ProductInfo pi2{ 67890, "���� ����", 10000 };

	//productSale(&pi, 10);

	productSwap(&pi, &pi2);

	printf("��ǰ��ȣ: %d\n", pi.num);
	printf("��ǰ��: %s\n", pi.name);
	printf("����: %d\n", pi.cost);

	printf("��ǰ��ȣ: %d\n", pi2.num);
	printf("��ǰ��: %s\n", pi2.name);
	printf("����: %d\n", pi2.cost);

}