#include <stdio.h>
int main() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("약수:");
	for(int i=1;i<=num;i++){
		if(num % i == 0)
			printf(" %d", i);
		else
			continue;
	}
	printf("\n");
	return 0;
}
