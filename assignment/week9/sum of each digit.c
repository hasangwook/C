#include <stdio.h>
int sum_digit(int x){
	if(x<10)
		return x;
	else
		return x%10+sum_digit(x/10);
}
int main() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("자리수의 합: %d\n", sum_digit(num));
	return 0;
}
