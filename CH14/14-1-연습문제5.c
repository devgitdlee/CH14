#include <stdio.h>

int main(void) {
	char mark[5][5] = { 0 };
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j) mark[i][j] = 'X'; //5-1
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2c", mark[i][j]);

		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i + j == 4) mark[i][j] = 'X'; //5-2
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%2c", mark[i][j]);

		}
		printf("\n");
	}
	return 0;
}