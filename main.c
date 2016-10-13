#include "string_tools.h"

int main() {
	char input[11] = "81763248752";
	bool result = modulusCheck(input, 6);

	printf("%s\n", result ? "TRUE" : "FALSE");
}