#include <iostream>

using namespace std;

int main() {
	int a(10); // int a = 10; cpp ��Ÿ�� ���� �ʱ�ȭ.
	int b(a); // a������ b �ʱ�ȭ.
	b++;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}