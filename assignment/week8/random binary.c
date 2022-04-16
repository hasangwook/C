#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int b_rand(){
	return (rand()%2);
}
int main() {
	int i = 0;
	srand((unsigned int)time(NULL));
	while(i<10){
		i++;
		printf(" %d", b_rand());
	}
	return 0;
}
