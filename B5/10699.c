#include <stdio.h>
#include <time.h>

int main() {
	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	printf("%0.4d-%0.2d-%0.2d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
	
	return 0;
}