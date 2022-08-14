#include <iostream>

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

// a, b�� int* Ÿ�� ������ ����Ű�� ���� ����.
void swap(int* (&a), int* (&b)) {
	int* tmp = a;
	a = b;
	b = tmp;
}

int main() {
	// �Լ� �����ε� - �Լ� �ߺ� ����

	int n1 = 20, n2 = 30;
	double d1 = 2.222, d2 = 3.333;
	int* p1 = &n1, * p2 = &n2;

	std::cout << "n1: " << n1 << std::endl;
	std::cout << "n2: " << n2 << std::endl;

	std::cout << "d1: " << d1 << std::endl;
	std::cout << "d2: " << d2 << std::endl;

	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;

	swap(n1, n2);
	swap(d1, d2);
	swap(p1, p2);

	std::cout << std::endl;
	std::cout << "n1: " << n1 << std::endl;
	std::cout << "n2: " << n2 << std::endl;

	std::cout << "d1: " << d1 << std::endl;
	std::cout << "d2: " << d2 << std::endl;

	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;
}