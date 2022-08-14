#include "nowarn.h"
#include <stdio.h>

int main() {

	FILE* in, * out; // ���� ��Ʈ��. ������ ����Ų��.
	int n;

	// r: read, w: write, a:append
	in = fopen("input.txt", "r");
	/*
	* in = fopen("not_exist.txt", "r"); => in���� null�� ����ȴ�.
	* ���Ŀ� in�� ������ fscanf�� �б⸦ �����ϸ� ��Ÿ�� ������ �߻��Ѵ�.
	*/
	out = fopen("output.txt", "w");

	if (in != nullptr) { // ���� ���� �ڵ�.
		// ���� ��Ʈ�� in���κ��� ���� �ϳ��� �Է¹޾� n�� �����Ѵ�.
		fscanf(in, "%d", &n);

		// ���� ��Ʈ�� out�� �������·� n ���.
		fprintf(out, "%d\n", n);
		fclose(in);
	}

	fclose(out);
	// main�Լ��� ����Ǹ� ���α׷����� �� ������ �ڵ����� ��� �ݴ´�.
	// �� ���� fclose()�� �ڵ�� ���� ����, ������ ���α׷��� Ŀ���� ���� ������ ������ �������� ���� �� �ݾƾ� �Ѵ�.

	FILE* in2 = fopen("suction.txt", "r");
	// fclose(in2); in2�� null�̸� fclose() ȣ�� �� ��Ÿ�� ������ �߻��Ѵ�.
}