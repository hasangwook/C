#include <stdio.h>
int main() {
	int a, b, c, min;
	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b){
		if(b>c)
			min = c;
		else
			min = b;
	}
	else{
		if(a>c)
			min = c;
		else
			min = a;
	}
	printf("제일 작은 정수는 %d입니다.\n", min);
	return 0;
}
