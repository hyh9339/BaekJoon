#include <stdio.h>

int main() {
	const int king = 1, queen = 1, rook = 2,
		bishop = 2, knight = 2, pawn = 8;
	int k, q, r, b, kn, p;
	scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &kn, &p);

	printf("%d %d %d %d %d %d\n", king - k, queen - q, rook - r,
		bishop - b, knight - kn, pawn - p);

	return 0;
}