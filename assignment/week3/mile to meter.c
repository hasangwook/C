#include <stdio.h>
int main() {
	double mile, meter;
	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);
	meter = mile*1609;
	printf("%lf마일은 %lf미터 입니다.\n", mile, meter);
	return 0;
}
