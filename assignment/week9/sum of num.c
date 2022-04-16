#include <stdio.h>
int sum(int n){
	if (n == 1){
		return 1;
	}
	else
		return n+sum(n-1);
}
int main() {
	int n, s;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	s = sum(n);
	printf("1부터 %d까지의 합=%d\n", n, s);
	return 0;
}
