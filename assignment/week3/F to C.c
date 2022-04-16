#include <stdio.h>
int main() {
	double f;
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &f);
	printf("섭씨값은 %lf도입니다.", (5*(f-32))/9);
	return 0;
}
