#include <stdio.h>
int main() {
	double w, h;
	printf("삼각형의 밑변: ");
	scanf("%lf", &w);
	printf("삼각형의 높이: ");
	scanf("%lf", &h);
	double area = (w * h)/2;
	printf("삼각형의 넓이: %lf", area);
	return 0;
}
