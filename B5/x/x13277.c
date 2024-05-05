#include <stdio.h>
#include <string.h>
#define MAX 600000

int main() {
	char a[300001] = "";
	char b[300001] = "";
	int mul[MAX] = { 0 };
	int i, j, k, count;
	int length = 0;

	scanf("%s %s", a, b);
	i = strlen(a) - 1;
	j = strlen(b) - 1;

	if (a[0] == 0 || b[0] == 0) {
		printf("0\n");
	}
	else {
		for (int m = i; m >= 0; --m) {
			count = MAX - m + i;
			for (int n = j; n >= 0; --n) {
				mul[count] = (a[m] - 48) * (b[n] - 48);
				count--;
			}
		}
		for (int m = 0; m < MAX; ++m) {
			if (mul != 0) {
				k = m;
			}
		}
		for (int m = MAX; m > k; --m) {
			if (mul[m] >= 10) {
				mul[m - 1] += mul[m] / 10;
				mul[m] %= 10;
			}
		}
	}

	for (int m = k; k <= MAX; ++m) {
		printf("%d", mul[m]);
	}

	return 0;
}