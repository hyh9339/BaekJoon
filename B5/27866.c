#include <stdio.h>

int main() {
	char s[1000] = "";
	scanf("%s", s);
	int i;
	scanf("%d", &i);

	printf("%c\n", s[i - 1]);

	return 0;
}