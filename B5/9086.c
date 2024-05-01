#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; ++i) {
		char str[1000] = "";
		scanf("%s", str);
		printf("%c", str[0]);
		printf("%c\n", str[strlen(str) - 1]);
	}

	return 0;
}