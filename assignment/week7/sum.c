#include <stdio.h>
int main() {
	double n = 10;
	double sum = 0;
	double i;
	for(i=0;i<n;i++){
		sum += (1/(i+1));
	}
	printf("%lf\n", sum);
	return 0;
}
