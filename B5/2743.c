#include <stdio.h>

int main() {
	char a[100] = "";
	int count = 0;
	scanf("%s", &a[0]);
	
	for (int i = 0; a[i] != NULL; ++i) {
		count++;
	}

	printf("%d", count);

	return 0;
}