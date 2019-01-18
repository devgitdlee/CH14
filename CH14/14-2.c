#include <stdio.h>


int main(void) {

	int num1[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9,10,11,12} };
	int num2[3][4] = { {1}, {5, 6}, {9,10,11} };
	int num3[][4] = { {1}, {2, 3}, {4, 5, 6} };
	int num4[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12 };
	int num5[3][4] = { 1, 2, 3, 4, 5, 6 };
	int num6[][4] = { 1, 2, 3, 4, 5, 6 };
	int i, j;


	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("num1:%d\n", num1[i][j]);
			printf("num2:%d\n", num2[i][j]);
			printf("num3:%d\n", num3[i][j]);
			printf("num4:%d\n", num4[i][j]);
			printf("num5:%d\n", num5[i][j]);
			printf("num6:%d\n", num6[i][j]);
		}
		//printf("\n");
	}

	return 0;
}