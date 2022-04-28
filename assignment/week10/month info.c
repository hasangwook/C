#include <stdio.h>
#define SIZE 12
int main() {
	int day[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 1;i<SIZE+1;i++){
		printf("%d월은 %d일까지 있습니다.\n", i, day[i-1]);
	}
	return 0;
}
