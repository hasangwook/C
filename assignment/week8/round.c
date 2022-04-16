#include <stdio.h>
int round(double f){
	return (int)(f + 0.5);
}

int main() {
	double f;
	printf("실수를 입력하시오: ");
	scanf("%lf", &f);
	printf("반올림한 값은 %d입니다.", round(f));
	return 0;
}
