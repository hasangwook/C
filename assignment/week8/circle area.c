#include <stdio.h>
#define pi 3.141592
double cal_area(double radius){
	return pi*radius*radius;
}
void main(){
	double radius;         
	printf("원의 반지름을 입력하시오:");
	scanf("%lf", &radius);
	printf("원의 면적은 %lf입니다.\n", cal_area(radius));   
}