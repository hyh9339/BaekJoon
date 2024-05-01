#include <stdio.h>

int main() {
	char grade[12][3] = { "A+", "A0", "A-", "B+", "B0", "B-",
						"C+", "C0", "C-", "D+", "D0", "D-" };
	float p[12] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3,
					2.0, 1.7, 1.3, 1.0, 0.7 };
	char score[3] = "";
	scanf("%s", score);

	if (score[0] == 'F') {
		printf("0.0");
	}
	else {
		for (int i = 0; i < 12; ++i) {
			if ((score[0] == grade[i][0]) && (score[1] == grade[i][1])) {
				printf("%.1f", p[i]);
			}
		}
	}
	return 0;
}