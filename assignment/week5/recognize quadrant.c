#include <stdio.h>
int main() {
	int x, y;
	printf("좌표(x,y): ");
	scanf("%d %d", &x, &y);
	if(x>0)
		if(y>0)
			printf("1사분면\n");
		else
			printf("4사분면\n");
	else
		if(y>0)
			printf("2사분면\n");
		else
			printf("3사분면\n");
	return 0;
}
