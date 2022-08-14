#include <iostream>

using namespace std;

int main() {
	int arr[10]{ 3,1,4,1,5,9,2,6,5,3 };

	for (int i : arr)
		cout << i << ", "; // i는 배열 요소의 값을 복사한 지역 변수이다.

	cout << endl;
}