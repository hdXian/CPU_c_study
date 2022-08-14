#include <iostream>

using namespace std;

class myC {
public:
	// 생성자
	myC() {
		cout << "생성자 호출" << endl;
	}

	// 소멸자
	~myC() {
		cout << "소멸자 호출" << endl;
	}
};

// 프로그램과 수명을 같이 함.
myC globalObj;

void localTest() {
	cout << "localTest() start" << endl;
	myC localObj;
	cout << "localTest() end" << endl;
}

int main() {
	cout << "main 시작" << endl;
	localTest();
	cout << "main 끝" << endl;
}