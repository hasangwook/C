#include <stdio.h>
int main() {
	char ch;
	printf("문자를 입력하시오:");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("모음입니다.");
			break;
		default:
			printf("자음입니다.");
			break;
	}
	return 0;
}
