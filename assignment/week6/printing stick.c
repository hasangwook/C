#include <stdio.h>
int main() {
	int num;
	while(1){
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &num);
		if(num == -1){
			return 0;
		}
		for(int i = 0; i<num;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
