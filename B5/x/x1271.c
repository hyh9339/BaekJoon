#include <stdio.h>

int main() {
	//변수 사이즈 문제 해결해야 함.
	unsigned long long n, m;
	scanf("%llu %llu", &n, &m);
	printf("%llu\n", n / m);
	printf("%llu\n", n % m);

	return 0;
}