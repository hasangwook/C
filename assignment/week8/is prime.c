#include <stdio.h>
int is_prime(int n){
	int count = 0;
	int i;
	for(i = 1;i<=n;i++){
		if(n % i == 0)
			count += 1;
	}
	if(count==2){
		printf(" %d", i-1);
		return 0;
	}
	else
		return 0;
}
int main() {
	for(int j = 1;j<=100;j++){
		is_prime(j);
	}
	return 0;
}
