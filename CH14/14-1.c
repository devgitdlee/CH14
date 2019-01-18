#include <stdio.h>

int main(void) {
	int score[3][4];
	int tot;
	double avg;
	int i, j;


	for (i = 0; i < 3; i++) {
		printf("네 과목의 점수 입력:");
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
		}

	}


	for (i = 0; i < 3; i++) {
		tot = 0;
		for (j = 0; j < 4; j++) {
			tot += score[i][j];
		}
		avg = tot / 4.0;
		printf("총점:%d, 평균: %.2lf\n", tot, avg);
	}

	return 0;

	
}