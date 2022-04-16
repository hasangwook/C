#include <stdio.h>
int main() {
	int num;
	printf("카운터의 초기값을 입력하시오: ");
	scanf("%d", &num);
	while(num>0){
		printf("%d ", num);
		num--;
	}
	printf("\n");
	return 0;
}
