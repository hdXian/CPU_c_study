#include <iostream>

using namespace std;

void Swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int main() {
	int a = 10;
	int& p = a;
	p++;
	cout << p << endl;
	cout << a << endl;

	int n1 = 2, n2 = 4;
	cout << n1 << ", " << n2 << endl;
	Swap(n1, n2);
	cout << n1 << ", " << n2 << endl;

	// int& r1 = 3; ����� ���������� �Ҵ� �Ұ����ϴ�. ������ ���� ����, �޸� �� �����ϴ°� �ƴϱ� ����.
	int&& r2 = 3; // int&&�� r-value(���� �Ұ�)�� ���Ѵ�. (l-value�� ���� ������ ������ ���Ѵ�.)
	cout << r2 << endl;

}