#include <stdio.h>
int main() {
	unsigned int num = 0;
	char ch1, ch2, ch3, ch4;
	printf("첫번째 문자를 입력하시오: ");
	scanf("%c", &ch1);
	getchar();
	printf("두번째 문자를 입력하시오: ");
	scanf("%c", &ch2);
	getchar();
	printf("세번째 문자를 입력하시오: ");
	scanf("%c", &ch3);
	getchar();
	printf("네번째 문자를 입력하시오: ");
	scanf("%c", &ch4);
	num|=ch4;
	num<<=8;
	num|=ch3;
	num<<=8;
	num|=ch2;
	num<<=8;
	num|=ch1;
	printf("결과값: %x", num);
	return 0;
}
//scanf를 %c로 이용할 경우 입력버퍼의 문제가 있다. 
//이것을 해결하려면 
//1. scanf뒤에 getchar을 입력한다. 
//2. scanf(" %c", &c)처럼 공백을 두고 %c를 쓴다.(공백을 안받겠다는 의미)
//3. scanf("%*c", &c)처럼 쓴다.(공백을 받되, 저장하지 않는다.) 