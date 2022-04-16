#include <stdio.h>
int main() {
	int n1, n2;
	printf("현재 시간(0~23)과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &n1, &n2);
	if(n1>17){
		printf("요금은 10000입니다.\n");
	}
	else if(n1<17 && (((n2>=3)&&(n2<=12))||(n2>=65)))
		printf("요금은 25000입니다.\n");
	else
		printf("요금은 34000입니다.\n");
	return 0;
}
