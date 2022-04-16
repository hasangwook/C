#include <stdio.h>
int check_alpha(char ch){
	if(ch>=97 && ch<=122){
		return 1;
	}
	else
		return 0;
}
int main() {
	char ch;
	printf("문자를 입력하시오: ");
	scanf("%c", &ch);
	int flag = check_alpha(ch);
	if(flag==1){
		printf("%c는 알파벳 문자입니다.\n", ch);
	}
	else
		printf("%c는 알파벳 소문자가 아닙니다.\n", ch);
	
	return 0;
}
