#include <stdio.h>
int main() {
	int sum = 0;
	for(int i = 0;i<100;i++){
		if((i+1)%3 == 0)
			sum += (i+1);
	}
	printf("1부터 100사이의 모든 3의 배수 합은 %d입니다.\n", sum);
	return 0;
}
