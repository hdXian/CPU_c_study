#include <stdio.h>

struct Point {
	int x, y;

	void moveRight() { x++; }
	void moveLeft() { x--; }
	void moveUp() { y++; }
	void moveDown() { y--; }

	void print() { 
		printf("(%d, %d)\n", x, y);
	}

};

int main() {

	Point p{ 2,5 };

	p.moveDown();
	p.moveRight();

	p.print();
}