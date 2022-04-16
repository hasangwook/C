#include <stdio.h>
int fib(int num){
	if(num == 0){
		return 0;
	}
	else if(num == 1){
		return 1;
	}
	else
		return fib(num-2) + fib(num-1);
}
int main() {
	int num;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &num);
	for(int i = 0;i<=num;i++){
		printf("%d, ", fib(i));
	}
	printf("\n");
	return 0;
}
