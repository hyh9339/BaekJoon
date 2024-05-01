#include <stdio.h>

int main() {
	char a[100] = "";
	scanf("%s", &a[0]);
	
	for (int i = 0; a[i] != NULL; ++i) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
		else {
			a[i] -= 32;
		}
	}

	printf("%s", a);

	return 0;
}