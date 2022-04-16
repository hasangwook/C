#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	srand((unsigned int)time(NULL));
	int com = rand()%3+1;      // 난수를 발생하는 rand() 함수
	int user;
	printf("선택하시오(1: 가위 2:바위  3:보)");
	scanf("%d", &user);
	if((com==2&&user==1) || (com==3&&user==2) || (com==1&&user==2)){
		printf("컴퓨터가 이겼음\ncomputer = %d, user = %d\n", com, user);
	}
	else if(com == user){
		printf("비겼음\ncomputer = %d, user = %d\n", com, user);
	}
	else
		printf("유저가 이겼음\ncomputer = %d, user = %d\n", com, user);
}
