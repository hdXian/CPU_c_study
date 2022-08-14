#include "nowarn.h"
#include <iostream>

int main() {
	FILE* in = fopen("t47_ex3.cpp", "r");
	char ch;
	while (!feof(in)) {
		fscanf(in, "%c", &ch); // fscanf도 파일의 끝에 도달하면 EOF를 반환하기 때문에, while문에 그대로 넣어도 된다.
		printf("%c", ch);
	}
	// 마지막 문자를 출력한 순간까지는 feof가 false이므로 한번 더 실행된다. 그래서 마지막의 }가 한번 더 출력된다.

	fclose(in);

	in = fopen("t47_ex3.cpp", "r");

	while (fscanf(in, "%c", &ch) != EOF) // 이 방식은 끝에 }가 한번 더 출력되지 않는다.
		printf("%c", ch);
	
	fclose(in);
}