#include <stdio.h>

struct ProductInfo {
	int num;
	const char* name;
	int cost;
};

int main() {
	ProductInfo pi{ 12345, "���� �Ѷ��", 20000 };

	ProductInfo* ppi = &pi;

	printf("��ǰ��ȣ: %d\n", ppi->num); // ppi->num == (*ppi).num
	printf("��ǰ��: %s\n", ppi->name);
	printf("����: %d\n", ppi->cost);

}