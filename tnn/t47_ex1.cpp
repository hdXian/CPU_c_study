#include "nowarn.h"
#include <stdio.h>

int main() {

	FILE* in, * out; // 파일 스트림. 파일을 가리킨다.
	int n;

	// r: read, w: write, a:append
	in = fopen("input.txt", "r");
	/*
	* in = fopen("not_exist.txt", "r"); => in에는 null이 저장된다.
	* 이후에 in을 가지고 fscanf등 읽기를 수행하면 런타임 오류가 발생한다.
	*/
	out = fopen("output.txt", "w");

	if (in != nullptr) { // 오류 방지 코드.
		// 파일 스트림 in으로부터 정수 하나를 입력받아 n에 저장한다.
		fscanf(in, "%d", &n);

		// 파일 스트림 out에 정수형태로 n 출력.
		fprintf(out, "%d\n", n);
		fclose(in);
	}

	fclose(out);
	// main함수가 종료되면 프로그램에서 연 파일을 자동으로 모두 닫는다.
	// 즉 위의 fclose()는 코드상 생략 가능, 하지만 프로그램이 커지고 여는 파일의 개수가 많아지면 제때 잘 닫아야 한다.

	FILE* in2 = fopen("suction.txt", "r");
	// fclose(in2); in2가 null이면 fclose() 호출 시 런타임 오류가 발생한다.
}