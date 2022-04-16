#include <stdio.h>
int main() {
	int x = 10, y = 20, temp;
	printf("x=%d y=%d\n", x, y);
	temp = y;
	y = x;
	x = temp;
	printf("x=%d y=%d", x, y);
	return 0;
}
