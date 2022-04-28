#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);
int main(void)
{
	int answer = sum(4, 4, 3, 2, 1);
	//인수개수, 인수들 대입
	printf("합은 %d입니다.\n", answer);

	return(0);
}

int sum(int num, ...)//인수 개수, 인수들을 받을 것이란 표기
{
	int answer = 0;
	va_list argptr; //가변 매개변수 자료형 변수 선언

	va_start(argptr, num);//가변 매개변수 num만큼 시작.
	for (; num > 0; num--)
		answer += va_arg(argptr, int);//가변 매개변수 처음꺼부터 꺼내씀.

	va_end(argptr);//가변 매개변수 종료
	return answer;
}