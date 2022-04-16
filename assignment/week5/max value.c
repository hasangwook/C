#include <stdio.h>
int main() {
	int a, b, c;
	int max;
	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);
	max = (a>b)?a:b;
	max = (max>c)?max:c;
	printf("죄대값:%d", max);
	return 0;
}
