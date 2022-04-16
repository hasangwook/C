#include <stdio.h>
int main() {
	char ch;
	printf("문자를 입력하시오: ");
	scanf("%c", &ch);
	if(ch == 'R' || ch == 'r')
		printf("Rectangle");
	else if(ch == 'T' || ch == 't')
		printf("Triangle");
	else if(ch == 'C' || ch == 'c')
		printf("Circle");
	
	
	return 0;
}
