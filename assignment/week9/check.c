#include <stdio.h>
int check(int pass){
	static int count = 0;
	if(pass == 1234){
		printf("로그인 되었습니다.\n");
		return 0;
	}
	else
		count++;
	if(count == 3){
		printf("로그인 시도횟수 초과\n");
		return 0;
	}
}
int main() {
	int pass;
	while(1){
		printf("비밀번호: ");
		scanf("%d", &pass);
		int try = check(pass);
		if(try == 0){
			break;
		}
	}
	return 0;
}
