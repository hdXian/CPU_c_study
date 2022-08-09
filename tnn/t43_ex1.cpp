#include <stdio.h>

typedef int Point[2];
typedef Point* PointPtr;

int main() {
	Point p = { 3,4 };
	PointPtr pp = &p;

	// **pp == *(*pp) == *p == p[0]
	printf("%d %d %d\n",  *(*pp), (*pp)[0], (*pp)[1]);

}