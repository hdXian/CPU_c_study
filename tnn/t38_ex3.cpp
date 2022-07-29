#include <stdio.h>

int main() {
	typedef const char* String;

	String name = "Doodle"; // const char* name = "Doodle";

	printf("%s\n", name);

}