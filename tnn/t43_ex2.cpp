#include <stdio.h>

struct Point {
	int x, y;
	void Swap() {
		int tmp = x;
		x = y;
		y = tmp;
	}
};

void pSwap(Point* p) {
	int tmp = p->x;
	p->x = p->y;
	p->y = tmp;
}

int main() {
	Point pos = { 3,4 };

	// pSwap(&pos);
	pos.Swap();

	printf("(%d, %d)\n", pos.x, pos.y);
}