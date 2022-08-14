#include <iostream>

int n;
void set() {
	n = 10;
}

namespace c1 {
	int n;
	void set() {
		n = 20;
	}

	// �̸����� c1 ���� �̸����� c2
	namespace c2 {

		void set() {
			n = 30;
		}
		int n;
	}
}

int main() {
	using namespace std;
	using namespace c1;

	// set(); => ������ set()�� c1�� set()�� ������ �� �����Ƿ� ������ �߻��Ѵ�.
	::set();
	c1::set();
	c1::c2::set();

	cout << ::n << endl;
}
