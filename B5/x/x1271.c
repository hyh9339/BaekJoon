#include <stdio.h>

int main() {
	//���� ������ ���� �ذ��ؾ� ��.
	unsigned long long n, m;
	scanf("%llu %llu", &n, &m);
	printf("%llu\n", n / m);
	printf("%llu\n", n % m);

	return 0;
}