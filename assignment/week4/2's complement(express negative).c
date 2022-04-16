#include <stdio.h>
int main() {
	int num, base;
	base = 0xFFFFFFFF;
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	num ^=base;
	num +=1;
	printf("2의 보수: %d\n", num);
	return 0;
}
