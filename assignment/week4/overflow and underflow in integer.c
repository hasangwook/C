#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;			// 최대값으로 초기화한다.
	unsigned short u_money = USHRT_MAX; 	// 최대값으로 초기화한다.

	s_money = s_money + 1;
	printf("s_money = %d\n", s_money);

	u_money = u_money + 1;
	printf("u_money = %d\n", u_money);

	return 0;
}
/*여기에서는 limits.h에 SHRT_MAX와 USHRT_MAX및 다른 자료형의 
최대, 최소 값을 쓸 수 있다는 것을 기억하자.*/
/*범위를 넘어선 오버플로우는 한바퀴를 돌아 다시 최소값으로 나온다고 보면 된다.
반대로 언더플로우는 한바퀴를 돌아 다시 최댓값으로 나온다.*/