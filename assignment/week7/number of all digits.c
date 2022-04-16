#include <stdio.h>
int main() {
	int num = 0;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	int count = 1;
	int base = 10;
	while(1){
		if(num/base == 0)
			break;
		else{
			count+=1;
			base*=10;
		}
	}
	printf("자리수의 개수: %d\n", count);
	return 0;
}
