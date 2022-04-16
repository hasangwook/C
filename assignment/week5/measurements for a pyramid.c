#include <stdio.h>
int main() {
	int a, b, c;
	float result;
	printf("지팡이의 높이를 입력하시오: "); //BC
	scanf("%d", &a);
	printf("지팡이 그림자의 길이를 입력하시오: ");//AC
	scanf("%d", &b);
	printf("피라미드까지의 거리를 입력하시오: ");//AE
	scanf("%d", &c);
	result = a*c/b; //비례식을 이용하여 식을 세운다.
	printf("피라미드의 높이는 %f입니다.\n", result);//DE
	return 0;
}
