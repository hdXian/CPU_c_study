#include <iostream>

using namespace std;

class myC {
public:
	// ������
	myC() {
		cout << "������ ȣ��" << endl;
	}

	// �Ҹ���
	~myC() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

// ���α׷��� ������ ���� ��.
myC globalObj;

void localTest() {
	cout << "localTest() start" << endl;
	myC localObj;
	cout << "localTest() end" << endl;
}

int main() {
	cout << "main ����" << endl;
	localTest();
	cout << "main ��" << endl;
}