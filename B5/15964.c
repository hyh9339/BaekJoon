#include <stdio.h>
#include <string.h>

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", (a + b) * (a - b));

	return 0;
}