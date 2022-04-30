#include <string.h>
#include <stdio.h>

int main(void)
{
	char str[100] = "There are 10 cats";
	int num, ch1[100];
	sscanf(str, "%*s %*s %d %s", &num, ch1);
	//%*s는 입력받되 무시해라. -> scanf %*c도 동일한 역할임.
	//scanf와 동일하게 주소를 넘겨줘야함. 
	//s(tr)scanf느낌이라고 생각하면 문자열에서 입력받는다고 보면 될듯하다.
	printf("%d %s\n", num, ch1);
	sprintf(str, "%d", num);
	//반대로 다른 요소들을 이용에서 s(tr)printf 문자열에 출력한다고 보면 될듯하다.
	//printf와 동일하게 주소를 넘겨주지 않아도 된다.
	printf("%s", str);
	return 0;
}