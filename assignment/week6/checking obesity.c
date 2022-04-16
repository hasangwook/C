#include <stdio.h>
int main() {
	int w, h, sw;
	printf("체중과 키를 입력하세요:");
	scanf("%d %d", &w, &h);
	sw = (h-100)*9/10;
	if(w == sw)
		printf("표준입니다.");
	else if(w > sw)
		printf("과체중입니다.");
	else
		printf("저체중입니다.");
	return 0;
}
