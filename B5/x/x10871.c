#include <stdio.h>

int main() {
	int n, x;
	int* list;
	scanf("%d %d", &n, &x);
	list = (int *)malloc(n * sizeof(int));
	if (list == NULL) {
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < n; i++) {
		if (list[i] < x) {
			printf("%d ", list[i]);
		}
	}

	free(list);
	return 0;
}