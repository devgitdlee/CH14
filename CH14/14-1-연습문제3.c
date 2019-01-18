#include <stdio.h>

int main(void) {

	int s[4][5];
	int i, j, cnt = 0;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			/*
			if (i == 0)s[i][j] = i + 1 + j;
			else if (i == 1) s[i][j] = 6 + j;
			else if (i == 2) s[i][j] = 11 + j;
			else s[i][j] = 16 + j;
			*/
			s[i][j] = ++cnt;
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf("%5d", s[i][j]);
		}
		printf("\n");
	}

	return 0;
}