#include <stdio.h>

int main(void)
{
	float x = 1.23456e-38;
	float y = 1.23456e-40;
	//float는 10^-38까지이기 때문에 소수 39번째와 40번째가 이상하게 출력된다.
	float z = 1.23456e-45;
	//출력될때 10^-38까지이고 float는 8자리까지 출력이기에 0.000000(3839404142434445)로 
	//38자리에 걸칠때 나머지 값은 쓰레기 값으로 처리된다.
	float zz = 1.23456e-46;
	//(39~46)이므로 전혀 걸치지 않아서 0을 반환한다.
	float zzz = 1.23456e+39;
	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);
	printf("zz = %e\n", zz);
	printf("zzz = %e\n", zzz);
	//오버플로우 시 inf가 출력된다.
}
//언더플로우와 오버플로우의 발생과정 및 양상
