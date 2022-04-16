#include <stdio.h>
int main(){
	int n, sum;
	for(n=1;;n++){
		sum+=n;
		if(sum>10000){
			sum-=n;
			n--;
			break;
		}
	}
	printf("1부터 %d까지의 합이 %d입니다.", n, sum);
	return 0;
}
