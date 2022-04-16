#include <stdio.h>
#define PI 3.141592
int main() {
	double r;
	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);
	printf("표면적은 %lf입니다.\n체적은 %lf입니다.\n", 4*PI*r*r, (4*PI*r*r*r)/3);
	return 0;
}
