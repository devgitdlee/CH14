#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[5][20];
	int i, len = 0, max = 0, longer = 0;
	printf("5���� ���� �̸� �Է�:");
	for (i = 0; i < 5; i++) {
		scanf("%s", ch[i]);
	}

	for (i = 0; i < 5; i++) {
		len = strlen(ch[i]);
		if (len > longer) {
			longer = len;
			max = i;
		}
	}
	printf("���̰� ���� �� ���� �̸��� %s�Դϴ�.", ch[max]);
	return 0;

}