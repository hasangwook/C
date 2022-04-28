#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void array_fill(int *a, int size){
	srand((unsigned int)time(NULL));
	for(int i = 0;i<size;i++){
		a[i] = rand();
	}
}
int main() {
	int a[10] = {};
	int size = 10;
	array_fill(a, size);
	for(int j = 0;j<size;j++){
		printf("%d ", a[j]);
	}
	return 0;
}
