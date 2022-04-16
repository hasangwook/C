#include <stdio.h>
int main() {
	double n1, n2;
	printf("실수를 입력하시오:");
	scanf("%lf %lf", &n1, &n2);
	printf("%lf %lf %lf %lf\n", n1+n2, n1-n2, n1*n2, n1/n2);
	return 0;
}
