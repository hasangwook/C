#include <stdio.h>
int main() {
	int x, y;
	printf("x좌표를 입력하시오: ");
	scanf("%d", &x);
	printf("y좌표를 입력하시오: ");
	scanf("%d", &y);
	(x > 0 && y > 0) ? (printf("1사분면\n")) : ((x > 0 && y < 0) ? printf("4사분면\n") : ((x < 0 && y < 0) ? printf("3사분면\n") : printf("2사분면\n")));
	return 0;
}
