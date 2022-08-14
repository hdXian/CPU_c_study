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

	// int& r1 = 3; 상수는 참조변수에 할당 불가능하다. 변경할 수도 없고, 메모리 상에 존재하는게 아니기 때문.
	int&& r2 = 3; // int&&는 r-value(변경 불가)를 뜻한다. (l-value는 변경 가능한 변수를 뜻한다.)
	cout << r2 << endl;

}