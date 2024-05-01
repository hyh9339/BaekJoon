#include <stdio.h>
#define NUM 30

int main() {
	int a[NUM] = { 0 };
	int n;

	for (int i = 0; i < NUM - 2; i++) {
		scanf("%d", &n);
		a[n - 1] = 1;
	}

	for (int i = 0; i < NUM; i++) {
		if (a[i] == 0) {
			printf("%d\n", i + 1);
		}
	}

	return 0;
}