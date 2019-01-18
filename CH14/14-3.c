#include <stdio.h>

int main(void) {

	char aniaml[5][20];
	int i;
	int count;

	count = sizeof(aniaml) / sizeof(aniaml[0]);
	//printf("count:%d", count);

	for (i = 0; i < count; i++) {
		scanf("%s", aniaml[i]);
	}


	for (i = 0; i < count; i++) {
		printf("%s, ", aniaml[i]);
	}

	return 0;
}