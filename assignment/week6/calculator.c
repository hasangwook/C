// 간단한 산술 계산기 프로그램

#include <stdio.h>
int main(void)
{

	char op;
	int x, y, result;
	printf("*****************\nA---- ADD\nS---- Subtract\nM---- Multiply\nD---- Divide\nQ---- Quit\n*****************\n연산을 선택하시오:");
	scanf("%c", &op);
	printf("두수를 공백으로 분리하여 입력하시오: ");
	scanf("%d %d", &x, &y);

	switch(op)
	{
		case 'A':
			result = x + y;
			break;
		case 'S':
			result = x - y;
			break;
		case 'M':
			result = x * y;
			break;
		case 'D':
			result = x / y;
			break;
		case 'Q':
			result = x % y;
			break;
		default:
			printf("지원되지 않는 연산자입니다. \n");
			break;
	}
	printf("%d \n", result);
	return 0;
}