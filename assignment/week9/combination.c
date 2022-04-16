#include <stdio.h>
int bc(int n, int k){
	if(k==0 || n==k)
		return 1;
	else
		return bc(n-1, k-1) + bc(n-1, k);
}
int main() {
	int n, k;
	printf("n=");
	scanf("%d", &n);
	printf("k=");
	scanf("%d", &k);
	printf("%d\n", bc(n,k));
	return 0;
}
