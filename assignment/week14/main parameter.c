#include <stdio.h>

int main(int argc, char* argv[])//argc는 argv배열에 들어갈 인수의 개수이고 argv는 인수이다.
{
	int i = 0;
	for (i = 0; i < argc; i++)
		printf("명령어 라인에서 %d번째 문자열 = %s\n", i, argv[i]);
	//만약 별도로 인수를 주지 않으면 그 파일의 경로를 인수로 가진다.(argc = 1, argv[0]="경로")
	//따로 인수를 주고 싶다면 c로 되어있는 실행파일을 
	//cmd에서 program.exe Hello World! 라고 한다면
	//(argc = 2, argv[0] = "Hello" argv[1] = "World!")가 되는 것이다.
	return 0;
}