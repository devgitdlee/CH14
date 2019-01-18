#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[10][20];
	char str[20];
	int cnt=0, i;
	while (1) {
		printf("단어 입력 (종료는 end 입력):");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) {
			printf("# 총 %d개의 단어가 입력되었습니다!\n", cnt);
			break;
		}
		
		strcpy(ch[cnt], str);
		cnt++;
	}

	printf("\n");
	//printf("ch배열 크기 %d\n", sizeof(ch) / sizeof(ch[0]));
	while (1) {
		printf("검색 단어(종료는 end 입력):");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) break;
		int n = 0;
		for (i = 0; i < cnt; i++) {
			
			if (strcmp(ch[i], str) == 0) {
				n = 1;
				break;
			}
			
		}
		if (n == 1) printf("# %d번째 같은 단어가 있습니다.\n", i + 1);
		else printf("# 없는 단어입니다.\n");

	}

	return 0;
	

}