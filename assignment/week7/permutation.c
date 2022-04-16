#include <stdio.h>
int main() {
	int n, r, sum;
	sum = 1;
	printf("n의 값: ");
	scanf("%d", &n);
	printf("r의 값: ");
	scanf("%d", &r);
	while(n-r+1 <= n){
		sum *= n-r+1;
		r--;
	}
	printf("순열의 값은 %d입니다.", sum);
	return 0;
}
