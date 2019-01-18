#include <stdio.h>

int main(void) {
	char str[4][10] = { "관악점", "강남점", "명동점", "대림점" };
	int ary[4][7] = { {70,45,100,92,150,81}, {88,92,77,30,52,55}, {50,90,88,75,77,49}, {120,92,80,150,130,105} };
	int i, j, tot, *tpa;
	char *tps;
	char *ps[4];
	int *pa[4];

	for (i = 0; i < 4; i++) {
		tot = 0;
		for (j = 0; j < 6; j++) {
			tot += ary[i][j];
		}
		ary[i][6] = (int)(tot / 6.0 + 0.5);
	}
	
	for (i = 0; i < 4; i++) {
		ps[i] = str[i];
		pa[i] = ary[i];
	}

	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 4; j++) {
			if (pa[i][6] < pa[j][6]) {
				tps = ps[i];
				ps[i] = ps[j];
				ps[j] = tps;

				tpa = pa[i];
				pa[i] = pa[j];
				pa[j] = tpa;
			}
		}
	}
	printf("실적별 출력...\n");
	for (i = 0; i < 4; i++) {
		printf("%s", ps[i]);
		for (j = 0; j < 7; j++) {
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("지점별 출력...\n");
	for (i = 0; i < 4; i++) {
		printf("%s", str[i]);
		for (j = 0; j < 7; j++) {
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}

	return 0;

}