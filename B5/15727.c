#include <stdio.h>

int main() {
	int l, t;
	scanf("%d", &l);

	if (l % 5 == 0) {
		t = l / 5;
	}
	else {
		t = l / 5 + 1;
	}

	printf("%d\n", t);

	return 0;
}