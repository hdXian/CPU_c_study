#include <iostream>

using namespace std;

int main() {
	int a(10); // int a = 10; cpp 스타일 변수 초기화.
	int b(a); // a값으로 b 초기화.
	b++;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}