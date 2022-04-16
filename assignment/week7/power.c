#include <stdio.h>
int	power(int base, int power_raised){
	int num = 1;
	for(int i = 0;i<power_raised;i++){
		num*=base;
	}
	return num;
}
int main() {
	int base, power_raised;
	printf("밑수: ");
	scanf("%d", &base);
	printf("지수: ");
	scanf("%d", &power_raised);
	int num = power(base, power_raised);
	printf("%d^%d = %d\n", base, power_raised, num);
	return 0;
}
