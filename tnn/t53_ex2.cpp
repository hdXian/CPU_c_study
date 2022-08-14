#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace c1 {
	int n;
	void set();

	// �̸����� c1 ���� �̸����� c2
	namespace c2 {
		void set();
		int n;
	}
}

int main() {
	::set();
	c1::set();
	c1::c2::set();

	cout << ::n << endl;
	cout << c1::n << endl;
	cout << c1::c2::n << endl;
}

// ���⸦ ������ �Ҷ��� c2::n�� ���� �����ϹǷ� c2::n�� ���߿� ����Ǿ �ǵ���� �۵��Ѵ�.
void c1::c2::set() {
	n = 30;
}

void c1::set() {
	n = 20;
}