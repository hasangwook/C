#include<stdio.h>
int main(void){
	double x, y, z;
	printf("실수를 입력하시오: ");
	scanf("%lf", &x);
	printf("실수를 입력하시오: ");
	scanf("%lf", &y);
	printf("실수를 입력하시오: ");
	scanf("%lf", &z);
	double sum = x + y + z;
	double avg = sum/3;
	printf("합은 %lf이고 평균은 %lf입니다.\n", sum, avg);
	return 0;
}
