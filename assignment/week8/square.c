#include <stdio.h>
double_square(double num){
	double num2 = num*num;
	return num2;
}
int main() {
	double num;
	printf("정수를 입력하시오: ");
	scanf("%lf", &num);
	double num2 = double_square(num);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.\n", num, num2);
	return 0;
}
