#include <stdio.h>

void Walk(int);

void Turn(int);

void drawSquare();

int main() {
	
	drawSquare();
	
	getchar();
}

void Walk(int distance) {
	printf("%d cm�� �ɾ����ϴ�.\n", distance);
}

void Turn(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}

void drawSquare() {
	for (int i = 0; i < 4; i++) {
		Walk(10);
		Turn(90);
	}
}