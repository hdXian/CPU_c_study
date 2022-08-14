#include <iostream>

using namespace std;

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };

	// int (&tmp)[3] => int[3]을 가리키는 참조 변수. int& tmp[3] => int& 변수의 배열. 만들 수 없다.
	for (int (&tmp)[3] : arr) {
		for (int i : tmp)
			cout << i << ", ";
		cout << endl;
	}

	cout << endl;
	for (auto &tmp : arr) {
		for (auto i : tmp)
			cout << i << ", ";
		cout << endl;
	}

	cout << endl;
	for (int(*tmp)[3] = arr; tmp < arr + 2; tmp++) {
		for (int i = 0; i < 3; i++)
			cout << (*tmp)[i] << ", ";
		cout << endl;
	}
	
}