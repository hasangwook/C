#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int count(int num[]){
	int max = 0;
	int p = 0;
	int count = 0;
	for(int j = 0;j<100;j++){
		for(int k = 0;k<j;k++){
			if(num[k] == num[j])
				count++;
			if(count>max){
				max = count;
				p = j;
			}
		}
		count = 0;
	}
	return num[p];
}
int main() {
	int num[100];
	srand((unsigned int)time(NULL));
	for(int i = 0;i<100;i++){
		num[i] = rand()%10;
	}
	printf("가장 많이 나온수=%d\n", count(num));
	return 0;
}
