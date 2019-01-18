#include <stdio.h>

int main(void) {

	//char *pary[5] = { "dog","elephant","horse","tiger","lion" }; //포인터 배열일경우에는 이중배열을 선언하지 않고 사용가능
	char pary[5][20] = { "dog","elephant","horse","tiger","lion" }; //포인터로 선언 안할시에는 이중배열문으로 문자열을 표현해야한다.
	int i;
	/*
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";
	*/
	for (i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}

	return 0;

}능