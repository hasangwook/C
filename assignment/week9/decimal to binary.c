// 2진수 형식으로 출력
#include <stdio.h>

void print_binary(int x);

int main(void)
{
	print_binary(19);
}

void print_binary(int x)
{
	if( x > 0 ) 
	{
		print_binary(x / 2);		// 재귀 호출
		printf("%d", x % 2);		// 나머지를 출력
					//위의 재귀 호출후 나머지 출력하는 순서도 여기선 중요하다.
	}
}