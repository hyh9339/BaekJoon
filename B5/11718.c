#include <stdio.h>
#include <string.h>

int main() {
	char input[101] = "";

	while (fgets(input, 101, stdin) != NULL) {
		printf("%s", input);
	}

	return 0;
}