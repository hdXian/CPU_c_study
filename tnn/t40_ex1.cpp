#include <stdio.h>

struct  ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main() {
	ProductInfo pi = { 12345, "���� �Ѷ��", 19900 }; // �ʱ�ȭ ����

	printf("��ǰ ��ȣ: %d\n", pi.num);
	printf("��ǰ��: %s\n", pi.name);
	printf("����: %d\n", pi.cost);

	printf("sizeof(pi) = %d\n", sizeof(pi)); // sizeof(int) + sizeof(char[100]) + sizeof(int)
	printf("%d\n", pi);

}