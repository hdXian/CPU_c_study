#include <iostream>

using namespace std;

int inven[64] = { 0 };
int score = 0;

void getItem(int itemId, int cnt = 1, int sc = 0) {
	inven[itemId] += cnt;
	score += sc;
}

int main() {
	getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);

	for (int i = 0; i < 15; i++)
		cout << "inven[" << i << "]: " << inven[i] << endl;

	cout << "score: " << score << endl;
}