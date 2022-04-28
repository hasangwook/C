#include <stdio.h>
int main(void) {
	int x = 0x12345678; //주소 값을 대입
	unsigned char *xp = (char *)&x; 
	//주소값을 두 개씩 자르기 위해 한바이트 단위인 char포인터로 변환하여 대입했다.
	printf("바이트순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
	//리틀 엔디언 방식을 사용하고 있기 때문에 반대로 바이트순서가 나오는 것을 확인가능하다.
	return 0;
}
