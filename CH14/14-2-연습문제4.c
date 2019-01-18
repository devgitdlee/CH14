#include <stdio.h>

int main(void) {
	char *ch[4];
	int i;

	ch[0] = "가위";
	ch[1] = "바위";
	ch[2] = "보";
	while (1) {
		int a = 0, b = 0;
		printf("정수입력:");
		scanf("%d", &a);
		if (a < 0) break;
		b = a % 3;
		if (b == 0) b = 3;
		printf("%s\n", ch[b-1]);

	}

	return 0;


}