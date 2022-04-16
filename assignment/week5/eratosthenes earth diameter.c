#include <stdio.h>
int main() {
	int distance;
	float radian;
	printf("거리를 입력하시오:");
	scanf("%d", &distance);
	printf("각도를 입력하시오:");
	scanf("%f", &radian);
	printf("지구의 반지름은 %f\n",(distance*360)/radian/3.14/2);
	return 0;
}
