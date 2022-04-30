#include <string.h>
#include <stdio.h>

int main(void)
{
	char string[80];
	strcpy(string, "Hello ");
	strcat(string, "World");
	//strcpy와 strcat은 널문자를 자동적으로 처리해준다.
	char string2[80];
	strncpy(string2, "Hello\0 World", 6);
	strncat(string2, "World\0!!", 6);
	// strncpy와 strncat을 사용할때는 문자열 마지막의 널문자를 따로 생각해줘야한다.
	printf("string = %s\n", string);
	printf("string2 = %s\n", string2);
	char s1[100] = "abcdefg";
	char s2[100] = "abcdcba";// s2가 작다. = s1이 s2보다 뒤에있다. >0
	printf("%d", strcmp(s1, s2));
	printf("%d", strncmp(s1, s2, 4));
	//strcmp와 strncmp(몇번째 문자까지 비교할지)이다. s1이 크면 양수, s2가 크면 음수이다.
	return 0;
}