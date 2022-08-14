#include <iostream>

using namespace std;

class myC {
public:
	// PrintThis()�� ��ü���� �����ϴ°� �ƴ϶� �޸� �� �ϳ� �����ϰ� ��ü�� �����Ͽ� ����.
	// �ڹ��� static �޼��� ���� �����ε�, c++���� static ���� �ʳ�? ���� ���̸� ���� �𸣰���.
	void PrintThis() {
		// this == &a, &b, ...
		cout << "���� �ּҴ� " << this << endl;
	}
};

int main() {
	myC a, b;
	cout << "a �ּ� :" << &a << endl;
	cout << "b �ּ� :" << &b << endl;
	a.PrintThis();
	b.PrintThis();
}