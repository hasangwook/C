// strcpy¿Í strcat
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s[] = "C language, and coding";
	char c = 'g';
	char* p;
	char* p2;
	int loc, loc2;
	p = strchr(s, c);
	loc = (int)(p - s); // s는 시작주소 p 는 발견 주소라서 주소값 차이는 찾는 값의 순서가 됨.
	printf("%s에서 첫번째 %c가 %d에서 발견됨.\n", s, c, loc);
	p2 = strstr(s, "coding");
	loc2 = (int)(p2 - s);
	printf("%s에서 첫번째 %s가 %d에서 발견됨.", s, "coding", loc2);
	//strchr, strstr둘 다 주소값을 반환함.

	char* token;
	token = strtok(s, " ,\t");//여기서 분리하는 기준은 1. 띄어쓰기, 2. ,, 3. \t이 된다.
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, " ,\t");//NULL을 쓰면 그 다음 토큰을 받아옴.
	}
	//strtok도 주소 값을 반환함

	return 0;
}