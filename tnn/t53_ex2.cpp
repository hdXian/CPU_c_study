#include <iostream>

using namespace std;

int n;
void set() {
	n = 10;
}

namespace c1 {
	int n;
	void set();

	// 이름공간 c1 안의 이름공간 c2
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

// 여기를 컴파일 할때는 c2::n을 참조 가능하므로 c2::n이 나중에 선언되어도 의도대로 작동한다.
void c1::c2::set() {
	n = 30;
}

void c1::set() {
	n = 20;
}