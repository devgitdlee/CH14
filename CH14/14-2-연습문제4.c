#include <stdio.h>

int main(void) {
	char *ch[4];
	int i;

	ch[0] = "����";
	ch[1] = "����";
	ch[2] = "��";
	while (1) {
		int a = 0, b = 0;
		printf("�����Է�:");
		scanf("%d", &a);
		if (a < 0) break;
		b = a % 3;
		if (b == 0) b = 3;
		printf("%s\n", ch[b-1]);

	}

	return 0;


}