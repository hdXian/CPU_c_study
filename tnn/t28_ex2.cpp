#include <stdio.h>

int main() {
	char str[] = "Hello";

	printf("%s\n", str);
	printf("%s\n", &str[0]);
	printf("\n");

	char strs[][10] = { "Hello", "World", "Suction" };
	char* str_ps[3];

	for (int i = 0; i < 3; i++)
		str_ps[i] = strs[i];

	for (int i = 0; i < 3; i++) {
		printf("%s\n", strs[i]);
		printf("%s\n", str_ps[i]);
	}
}