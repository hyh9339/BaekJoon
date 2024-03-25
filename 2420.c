#include <stdio.h>

int main() {
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n - m < 0) {
		printf("%lld", (-1) * (n - m));
	}
	else {
		printf("%lld", n - m);
	}

	return 0;
}