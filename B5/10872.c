#include <stdio.h>

int main() {
	unsigned int n;
	unsigned int result = 1;
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		result *= i;
	}

	printf("%d", result);

	return 0;
}