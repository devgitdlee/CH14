#include <stdio.h>
#include <string.h>

int main(void) {
	char ch[10][20];
	char str[20];
	int cnt=0, i;
	while (1) {
		printf("�ܾ� �Է� (����� end �Է�):");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) {
			printf("# �� %d���� �ܾ �ԷµǾ����ϴ�!\n", cnt);
			break;
		}
		
		strcpy(ch[cnt], str);
		cnt++;
	}

	printf("\n");
	//printf("ch�迭 ũ�� %d\n", sizeof(ch) / sizeof(ch[0]));
	while (1) {
		printf("�˻� �ܾ�(����� end �Է�):");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) break;
		int n = 0;
		for (i = 0; i < cnt; i++) {
			
			if (strcmp(ch[i], str) == 0) {
				n = 1;
				break;
			}
			
		}
		if (n == 1) printf("# %d��° ���� �ܾ �ֽ��ϴ�.\n", i + 1);
		else printf("# ���� �ܾ��Դϴ�.\n");

	}

	return 0;
	

}