#include <stdio.h>
#include <string.h>

int main() {
	char a[1000] = "";
	char b[1000] = "";
	scanf("%s", a);
	scanf("%s", b);
	int i, j;

	for (i = 0; a[i] != 'h'; ++i);
	for (j = 0; b[j] != 'h'; ++j);

	if (i >= j) {
		printf("go\n");
	}
	else {
		printf("no\n");
	}

	return 0;
}