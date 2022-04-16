#include <stdio.h>
int main() {
	int num, i;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	do{
		printf("%d", num%10);
		num/=10;
	}while(num);
	return 0;
}
