#include <stdio.h>
#include <math.h>
int main() {
	double s = 0;
	double i_degree;
	for(double i = 0;i<=180;i+=10){
		i_degree = i*M_PI/180;
		s = sin(i_degree);
		printf("sin(%lf)의 값은 %lf\n", i, s);
	}
	return 0;
}
// 180도 = pi -> 1도 = pi/180 -> n도 =pi/180*n