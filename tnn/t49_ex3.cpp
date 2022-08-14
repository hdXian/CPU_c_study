#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	cin >> name;

	string msg = "안녕하세요, " + name + '!';

	cout << msg << endl;
}