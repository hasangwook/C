#include <stdio.h>
#include <math.h>
#define e 0.000001
float min (float a, float b){
	if (a>b)
		return a;
	else
		return b;
}
int f_equal(float a, float b){
	if(abs(a-b)/min(a, b)<e)
		return 1;
	else
		return 0;
}
int main() {
	float num1, num2;
	printf("실수를 입력하시오: ");
	scanf("%f", &num1);
	printf("실수를 입력하시오: ");
	scanf("%f", &num2);
	if(f_equal == 1)
		printf("두 개의 실수는 서로 같음\n");
	else
		printf("두 개의 실수는 서로 다름\n");
	return 0;
}
