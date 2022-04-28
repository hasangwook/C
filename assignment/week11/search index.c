#include <stdio.h>
void search(int *A, int size, int search_value){
	for(int i = 0;i<size;i++){
		if(*(A+i) == search_value)
			printf("월급이 %d만원인 사람의 인덱스=%d\n", search_value, i);
	}
}
int main() {
	int data[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
	int size = 10;
	search(data, size, 200);
	return 0;
}
