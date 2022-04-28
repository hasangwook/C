#include<stdio.h>
void sort(int* array, int size) {
	int least;
	int temp = 0;
	for (int i = 0; i < (size - 1); i++) { // 비교할 개수는 size보다 하나 적게이다.
		least = i;  //정렬된 값 다음부터 진행해야되니까 최소를 설정
		for (int j = least; j < (size); j++) {  //처음부터 size까지 최소값을 찾아서 대입하는 과정
			if (array[i] >= *(array + j)) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
int main(void) {
	int a[8] = {1, 4, 3, 6, 5, 9, 2, 2 };
	int size = 8;
	sort(a, size);
	for (int i = 0; i < size; i++) {
		printf("%d", a[i]);
	}
	
}