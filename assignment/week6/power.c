#include <stdio.h>
int main() {
	double base, power;
	double sum =1;
	printf("실수의 값을 입력하시오: ");
	scanf("%lf", &base);
	printf("거듭제곱횟수를 입력하시오: ");
	scanf("%lf", &power);
	for(int i = 0;i<power;i++){
		sum*=base;
	}
	printf("결과값은 %lf\n", sum);
	return 0;
}
