#include <stdio.h>
#include <string.h>

int main() {
	char a[10001] = "";
	char b[10001] = "";
	int sum[10000] = { 0 };
	int i, j, length;

	scanf("%s %s", a, b);
	i = strlen(a) - 1;
	j = strlen(b) - 1;

	if (i == j) {
		for (int m = i; m >= 0; --m) {
			sum[m] = a[m] + b[m] - 96;
		}
		for (int m = i; m > 0; --m) {
			if (sum[m] >= 10) {
				sum[m - 1] += sum[m] / 10;
				sum[m] %= 10;
			}
		}
		length = i;
	}
	else if (i > j) {
		for (int m = i; m >= i - j; --m) {
			sum[m] = a[m] + b[m - i + j] - 96;
		}
		for (int m = 0; m < i - j; ++m) {
			sum[m] = a[m] - 48;
		}
		for (int m = i; m > 0; --m) {
			if (sum[m] >= 10) {
				sum[m - 1] += sum[m] / 10;
				sum[m] %= 10;
			}
		}
		length = i;
	}
	else{
		for (int m = j; m >= j - i; --m) {
			sum[m] = a[m - j + i] + b[m] - 96;
		}
		for (int m = 0; m < j - i; ++m) {
			sum[m] = b[m] - 48;
		}
		for (int m = j; m > 0; --m) {
			if (sum[m] >= 10) {
				sum[m - 1] += sum[m] / 10;
				sum[m] %= 10;
			}
		}
		length = j;
	}

	for (int m = 0; m <= length; ++m) {
		printf("%d", sum[m]);
	}

	return 0;
}