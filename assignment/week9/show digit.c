#include <stdio.h>
void show_digit(int x){
	printf("%d %d %d %d\n", (x/1000)%10, (x/100)%10, (x/10)%10, x%10);
}
int main() {
	int num;
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	show_digit(num);
	return 0;
}
