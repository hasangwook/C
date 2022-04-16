#include <stdio.h>
int main() {
	float x;
	float result;
	printf("x의 값을 입력하시오:");
	scanf("%f", &x);
	if(x<=0)
		result = x*x -9*x + 2;
	else
		result = 7*x + 2;
	printf("f(x)의 값은 %f입니다.\n", result);
	return 0;
}
