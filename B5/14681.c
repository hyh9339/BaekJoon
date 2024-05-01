#include <stdio.h>

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0) {
		(y > 0) ? printf("1\n") : printf("4\n");
	}
	else {
		(y > 0) ? printf("2\n") : printf("3\n");
	}
	
	return 0;
}