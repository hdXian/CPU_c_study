#include <iostream>

using namespace std;

int main() {
	int arr[10]{ 3,1,4,1,5,9,2,6,5,3 };

	for (int i : arr)
		cout << i << ", "; // i�� �迭 ����� ���� ������ ���� �����̴�.

	cout << endl;
}