#include <stdio.h>
int main() {
	int num, num2;
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &num2);
	printf("%d<<%d의 값: %d", num, num2, num << num2);
	return 0;
}
