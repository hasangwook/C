#include<stdio.h>
void s_search(int* array,int search, int size) {
	for (int i = 0; i < size; i++) {
		if (*(array + i) == search) {
			printf("탐색 성공 인덱스= %d\n", i);
			return 0;
		}
	}
	printf("탐색 실패(값이 존재하지 않음)\n");
}
int main(void) {
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int search;
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &search);
	s_search(array, search, 10);
}
// 말 그대로 순차적으로 탐색하는 알고리즘이다.