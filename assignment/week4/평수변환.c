#include <stdio.h>
int main() {
	float num;
	float num2;
	printf("평을 입력하세요: ");
	scanf("%f", &num);
	num2 = num * 3.3;
	printf("%f평방미터입니다.", num2);
	return 0;
}
