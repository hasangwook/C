#include <stdio.h>
int main() {
	double x;
	printf("실수를 입력하시요:");
	scanf("%lf", &x);
	double result = 3*x*x + 7*x + 11;
	printf("다항식의 값은 %lf", result);
	return 0;
}
