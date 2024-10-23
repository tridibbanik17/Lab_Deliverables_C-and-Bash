#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int n) {
	if ((n == 0) || (n == 1)) {
		return 1; //base case
	}

	return n*factorial(n-1);
}

int main() {
	printf("%d\n", factorial(5));
}
