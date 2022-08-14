#include <iostream>

using namespace std;

class myC {
public:
	// PrintThis()는 객체마다 존재하는게 아니라 메모리 상에 하나 존재하고 객체가 공유하여 쓴다.
	// 자바의 static 메서드 같은 느낌인데, c++에도 static 있지 않나? 둘의 차이를 아직 모르겠음.
	void PrintThis() {
		// this == &a, &b, ...
		cout << "나의 주소는 " << this << endl;
	}
};

int main() {
	myC a, b;
	cout << "a 주소 :" << &a << endl;
	cout << "b 주소 :" << &b << endl;
	a.PrintThis();
	b.PrintThis();
}