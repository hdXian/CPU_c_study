#include <stdio.h>

void Walk(int);

void Turn(int);

void drawSquare();

int main() {
	
	drawSquare();
	
	getchar();
}

void Walk(int distance) {
	printf("%d cm를 걸었습니다.\n", distance);
}

void Turn(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}

void drawSquare() {
	for (int i = 0; i < 4; i++) {
		Walk(10);
		Turn(90);
	}
}