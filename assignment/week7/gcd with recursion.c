#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return(b, a % b);
}
int main(void)
{
	int a, b;
	printf("두 수를 입력하시오.: ");
	scanf("%d %d", &a, &b);
	printf("최대공약수는 %d입니다.", gcd(a, b));
}
// 유클리드 알고리즘
// gcd(a, b) = gcd(b, a/b)이다.