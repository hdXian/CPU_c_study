#include "nowarn.h"
#include <iostream>

int main() {
	FILE* in = fopen("t47_ex3.cpp", "r");
	char ch;
	while (!feof(in)) {
		fscanf(in, "%c", &ch); // fscanf�� ������ ���� �����ϸ� EOF�� ��ȯ�ϱ� ������, while���� �״�� �־ �ȴ�.
		printf("%c", ch);
	}
	// ������ ���ڸ� ����� ���������� feof�� false�̹Ƿ� �ѹ� �� ����ȴ�. �׷��� �������� }�� �ѹ� �� ��µȴ�.

	fclose(in);

	in = fopen("t47_ex3.cpp", "r");

	while (fscanf(in, "%c", &ch) != EOF) // �� ����� ���� }�� �ѹ� �� ��µ��� �ʴ´�.
		printf("%c", ch);
	
	fclose(in);
}