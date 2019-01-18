#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[5][20];
	int i, len = 0, max = 0, longer = 0;
	printf("5개의 과일 이름 입력:");
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
	printf("길이가 가장 긴 과일 이름은 %s입니다.", ch[max]);
	return 0;

}