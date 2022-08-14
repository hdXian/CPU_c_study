#include <iostream>

using namespace std;

int n;

void set() {
	::n = 10; // 명시적 전역 변수.
}

namespace c1 {
	int n;
	void set();
}

namespace c2 {
	int n;
	void set();
}

int main() {
	::set();
	c1::set();
	c2::set();

	cout << ::n << endl;
	cout << c1::n << endl;
	cout << c2::n << endl;
}

// 위에 선언된 c1과 연동된다.
// void c1::set() { ... }
namespace c1 {
	void set() {
		n = 20;
	}
}

// void c2::set() { ... }
namespace c2 {
	void set() {
		n = 30;
		// ::n = 30; => 전역변수 n에 30을 대입.
	}
}