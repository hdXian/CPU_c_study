#include <stdio.h>

typedef struct {
	int x, y;
} Point;

int main() {
	
	// typedef struct { int x, y; } Point;
	// struct Point { int x, y; };
	
	Point p;
	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}