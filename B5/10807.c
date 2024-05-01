#include <stdio.h>

int main() {
	int n, v;
	int result = 0;
	int a[100] = {0};
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &v);
	for (int i = 0; i < n; i++) {
		if (a[i] == v) result++;
	}
	printf("%d\n", result);

	return 0;
}