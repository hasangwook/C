#include<stdio.h>
int main(void) {
	char str[] = "Hello World!\n";
	//str 과 내용은 데이터 세그먼트에 저장된다.
	printf("%s", str);
	strcpy(str, "goodbye");
	//가능하다. 
	printf("%s\n", str);
	
	/*
	str[1] = "j";
	이렇게는 안되는 모양이다. 데이터가 이상하게 들어간다.
	문자열 자체가 전체적인 수정만 가능한거 같다.
	대신에 str[1] = array[1];처럼은 데이터가 들어간다.
	*/
	
	char* p = "Hello World!\n";
	//여기서 p는 데이터 세그먼트, Hello World!는 텍스트 세그먼트이다.
	p = "goodbye";
	//위 문장은 가능하다.
	//p에 goodbye라는 문자열의 주소를 대입하는 것

	/*
	*p = "goodbye";
	-> 당연히 불가능하다.
	p[0] = "g";
	-> 불가능하다. 
	-> 텍스트 세그먼트 수정 안됨.
	strcpy(p, "Hello"); 
	-> p안의 내용을 수정하기 때문에 마찬가지로 불가능하다.
	-> 텍스트 세그먼트 수정 안됨.
	*/
	char* pch[3] = { "aaaaaa", "bbbbbb", "cccccc" };
	pch[0] = "bbbbbb";
	/*
	strcpy(pch[0], "bbbbbb");
	위 문장은 마찬가지로 pch[0]의 내용이 텍스트 세그먼트이기에 오류가 난다.
	*/
}
//strcpy를 *p의 값을 바꾸려 시도한다고 생각하자.