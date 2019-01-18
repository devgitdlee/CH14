#include <stdio.h>

int main(void) {
	char *order[] = { "첫", "두", "셋" };
	double ary1[4] = { 1.5,2.3,7.7,4.9 };
	double ary2[4] = { 3.4,5.2,4.0,9.1 };
	double ary3[4] = { 0.3,7.2,8.4,6.6 };
	double *sumary[3] = { ary1, ary2, ary3 };
	int i, j, max;
	double temp, sum = 0.0, avg = 0.0;


	for (i = 0; i < 3; i++) {
		temp = 0.0;
		for (j = 0; j < 4; j++) {
			temp += sumary[i][j];
			if (temp > sum) {
				sum = temp;
				max = i;
				avg = sum / 4;
			}
		}
	}
	printf("%s 번째 배열:", order[max]);
	for (i = 0; i < 4; i++) {
		printf("%5.1lf", sumary[max][i]);
	}
	//printf("%d 번째 배열: %.1lf %.1lf %.1lf %.1lf", max+1, sumary[max][0], sumary[max][1], sumary[max][2], sumary[max][3]);
	printf("\n");
	printf("평균 %.1lf", avg);
	
	return 0;
}