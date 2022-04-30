#include<stdio.h>
#define UINT unsigned int
//typedef unsigned int UINT와 동일하다.
typedef struct point {
	int x; 
	int y;
} POINT;
//typedef 활용1
struct student {
	int number;
};
typedef struct student S;
//typedef 활용2
int main(void) {
	UINT a = 0;
	printf("%d", a);
	S b;
	b.number = 10;
	POINT c;
	c.x = 30;
	c.y = 30;
}