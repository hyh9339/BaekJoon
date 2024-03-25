#include <stdio.h>

int main() {
	int year;
	int result = 0;
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		result = 1;
	}

	printf("%d", result);

	return 0;
}