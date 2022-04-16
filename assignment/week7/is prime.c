#include <stdio.h>
int main() {
	int count = 0;
	int i, j;
	for(i = 1;i<=100;i++){
		for(j = 1;j<=i;j++){
			if((i % j) == 0)
				count += 1;
		}
		if(count == 2){
			printf(" %d", i);
			count = 0;
		}
		count = 0;
	}
	return 0;
}
