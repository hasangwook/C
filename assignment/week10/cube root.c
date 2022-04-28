#include <stdio.h>
int main() {
	int num1;
	int num[3][10] = {
	{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 
	{1, 4, 9, 16, 25, 36, 49, 64, 81, 100}, 
	{1, 8 ,27, 64, 125, 216, 343, 512, 729, 1000}};
	printf("정수를 입력하시오:");
	scanf("%d", &num1);
	for(int i = 0; i<10;i++){
		if (num1 == num[2][i])
			printf("%d의 세제곱근은 %d\n", num1, num[0][i]);
	}

	
	return 0;
}
