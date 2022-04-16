#include <stdio.h>
int is_multiple(int n, int m){
	if(n % m == 0)
		return 1;
	else
		return 0;
}
int main() {
	int num1, num2;
	printf("첫번째 정수를 입력하시오:");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하시오:");
	scanf("%d", &num2);
	switch(is_multiple(num1, num2)){
		case 1:
			printf("%d는 %d의 배수입니다.", num1, num2);
			break;
		default:
			printf("%d는 %d의 배수가 아닙니다.", num1, num2);
	}
	return 0;
}
