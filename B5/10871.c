#include <stdio.h>

int main() {
	int a;
	int n, x;
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a < x) printf("%d ", a);
	}
	printf("\n");

	return 0;
}