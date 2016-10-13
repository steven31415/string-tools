#include "string_tools.h"

int main() {
	
	// EXAMPLE

	char input[25] = "8168576319872394832874629";
	bool result = modulusCheck(input, 25, 7);

	printf("%s\n", result ? "TRUE" : "FALSE");
}