#include <stdio.h>
#include <string.h>

void print_nospace(const char* str) {
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ')
			printf("%c", str[i]);
}

int main() {
	print_nospace("Hello, World!\n");
	print_nospace("My name is Doodle\n");

}