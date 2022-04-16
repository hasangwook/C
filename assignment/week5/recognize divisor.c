#include <stdio.h>
int main() {
	int num, num2;
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	printf("정수를 입력하시오:");
	scanf("%d", &num2);
	if(num%num2 == 0){
		printf("약수입니다.\n");
	}
	return 0;
}
