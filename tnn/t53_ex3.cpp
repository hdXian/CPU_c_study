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

	// 이름공간 c1 안의 이름공간 c2
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

	// set(); => 전역의 set()과 c1의 set()을 구분할 수 없으므로 오류가 발생한다.
	::set();
	c1::set();
	c1::c2::set();

	cout << ::n << endl;
}
