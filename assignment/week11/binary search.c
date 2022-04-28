#include<stdio.h>
void binary_search(int array[], int search, int size) {
	int low = 0, high = size - 1;
	int middle;
	//최저, 중간, 상한 설정
	while (low <= high) { 
		printf("[%d, %d]\n", low, high);
		middle = (low + high) / 2; // 정수로 나오게 됨
		if (search == array[middle]) { 
			printf("찾는 값의 인덱스는 %d", middle); // 같을 때엔 끝나는거.
			return 0;
		}
		else if (search > array[middle])
			low = middle + 1; // 중간보다 큰 값으로 하한 설정
		else
			high = middle - 1; // 중간보다 작은 값으로 상한 설정
	}
}
int main(void) {
	int a[] = { 1, 2, 20, 30, 40, 50, 80, 90, 100, 120, 130, 150, 170};
	int size = 13;
	binary_search(a, 170, size);
}