#include "string_tools.h"

bool modulusCheck(char input[], int n, int divisor) {

	if (divisor == 1) {
		return true;
	}

	int pNext[divisor];

	for (int i = 0; i < divisor; ++i) {
		pNext[i] = -1;
	}

	int i = 1;

	while (pNext[i] == -1) {
		int next = 10 * i % divisor;
		pNext[i] = next;
		i = next;
	}

	int r = 0;
	int p = 1;

	while (--n >= 0) {
		int digit =  input[n] - '0';

		r = (r + digit * p) % divisor;
		p = pNext[p];
	}

	if (r == 0) {
		return true;
	}
	else {
		return false;
	}
}
